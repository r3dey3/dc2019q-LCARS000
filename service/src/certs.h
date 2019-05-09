const unsigned char system_pub[] = {
  0x30, 0x82, 0x01, 0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86,
  0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0f, 0x00,
  0x30, 0x82, 0x01, 0x0a, 0x02, 0x82, 0x01, 0x01, 0x00, 0xe0, 0x82, 0x10,
  0x9e, 0x1c, 0x31, 0x42, 0x16, 0x42, 0x50, 0xc4, 0x42, 0x3f, 0xae, 0x11,
  0x4b, 0xea, 0x26, 0x6b, 0x55, 0x62, 0xf3, 0x7b, 0x86, 0xb6, 0x17, 0xa9,
  0xe2, 0x12, 0x41, 0x1b, 0x00, 0xfe, 0x49, 0xf5, 0x42, 0xf5, 0xae, 0xe9,
  0xbc, 0xc8, 0xe2, 0xe0, 0xa5, 0x6b, 0xa8, 0xaa, 0x09, 0xbf, 0x9d, 0xfc,
  0xfe, 0x48, 0xce, 0x7f, 0x8a, 0x2c, 0x26, 0xc9, 0x88, 0xfb, 0xe1, 0x79,
  0xff, 0x74, 0xea, 0x09, 0xc4, 0x36, 0x96, 0x18, 0xd2, 0xf5, 0x98, 0x3b,
  0x3d, 0x24, 0xa6, 0x8a, 0xad, 0x31, 0x85, 0xe6, 0x97, 0xf2, 0x27, 0xe3,
  0x9e, 0x64, 0x42, 0xf6, 0xe2, 0xd7, 0x16, 0xfb, 0x8e, 0xa1, 0xe1, 0xf1,
  0x77, 0x9a, 0xd0, 0x77, 0x5d, 0xf3, 0x9f, 0xf7, 0x77, 0xeb, 0xe5, 0x06,
  0x28, 0x42, 0x84, 0x66, 0xbc, 0x30, 0xc6, 0x1c, 0x38, 0xcd, 0xd4, 0xff,
  0xf5, 0x59, 0x15, 0xb3, 0xe4, 0x2b, 0x0d, 0xad, 0x79, 0x0b, 0x7e, 0x1c,
  0xfc, 0xbd, 0xce, 0xb4, 0xa9, 0x25, 0xb0, 0x0b, 0x1c, 0x54, 0xad, 0x23,
  0xbb, 0x7c, 0x3d, 0x06, 0xbd, 0x2a, 0xd8, 0x04, 0x18, 0xcf, 0x3f, 0x2f,
  0xa1, 0xdf, 0x70, 0xcd, 0x23, 0x38, 0xec, 0xf4, 0xf5, 0x06, 0x06, 0xfa,
  0x4b, 0x5f, 0x6b, 0xdc, 0xaa, 0x66, 0xdb, 0x8d, 0x00, 0x93, 0xf9, 0x88,
  0xb4, 0x2a, 0x09, 0x6e, 0xb1, 0x55, 0xa5, 0xad, 0x05, 0xe7, 0x85, 0x46,
  0x9a, 0xf6, 0x01, 0x3d, 0x45, 0xcf, 0xe3, 0x9b, 0x20, 0x66, 0x46, 0xbf,
  0xbf, 0xd1, 0x76, 0x5d, 0x0e, 0x05, 0x4c, 0x29, 0x87, 0x1d, 0x6f, 0xc2,
  0x0e, 0x47, 0xd8, 0x03, 0xfe, 0x31, 0x17, 0x4c, 0xed, 0x3d, 0x53, 0xd7,
  0xd7, 0x09, 0xd7, 0x62, 0x4c, 0x42, 0xbd, 0x06, 0xf9, 0xaa, 0x0b, 0x7c,
  0x2d, 0xd1, 0xeb, 0xaa, 0xee, 0x20, 0xaf, 0x33, 0x1f, 0x89, 0xb1, 0x98,
  0x6f, 0x02, 0x03, 0x01, 0x00, 0x01
};
const unsigned int system_pub_len = 294;
const unsigned char platform_pub[] = {
  0x30, 0x82, 0x01, 0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86,
  0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0f, 0x00,
  0x30, 0x82, 0x01, 0x0a, 0x02, 0x82, 0x01, 0x01, 0x00, 0xae, 0xe6, 0x0c,
  0x6d, 0x7e, 0xb5, 0x33, 0x17, 0x15, 0xa2, 0xbf, 0x72, 0x16, 0x60, 0xba,
  0x5e, 0x31, 0x04, 0x37, 0x52, 0xb8, 0x64, 0xde, 0xec, 0x44, 0xf4, 0x58,
  0x27, 0xd8, 0xba, 0x9a, 0x63, 0x90, 0x67, 0xce, 0x01, 0xbf, 0xff, 0x92,
  0xa9, 0x13, 0xe6, 0x1c, 0xaf, 0x7f, 0x86, 0xf7, 0xf1, 0x53, 0x18, 0xe8,
  0x57, 0x01, 0xe4, 0x5c, 0x8b, 0xad, 0x55, 0x8d, 0xe5, 0xc1, 0x1c, 0xdf,
  0x77, 0xbf, 0x9d, 0x14, 0x61, 0xed, 0x7f, 0x5f, 0xd7, 0x68, 0x41, 0x67,
  0xe1, 0x0f, 0x0e, 0xac, 0x00, 0x57, 0xea, 0x8f, 0xab, 0xa7, 0x3a, 0xd7,
  0x26, 0xaa, 0x83, 0x7a, 0xc2, 0xff, 0xf0, 0xa1, 0x6c, 0x6a, 0x13, 0xd1,
  0x30, 0x12, 0x23, 0x6c, 0x94, 0x62, 0x74, 0xbd, 0x55, 0x1f, 0xac, 0xad,
  0xd1, 0xed, 0x08, 0xb7, 0x1f, 0x99, 0xd7, 0xde, 0x47, 0x6d, 0xc4, 0x27,
  0x60, 0x95, 0xac, 0x11, 0x43, 0xfd, 0xba, 0xd3, 0xf9, 0x16, 0x11, 0x96,
  0x59, 0xb3, 0x93, 0xa2, 0xa8, 0xb7, 0x02, 0x01, 0x88, 0x64, 0x9b, 0x38,
  0x40, 0x46, 0x04, 0x38, 0x22, 0x18, 0x86, 0xda, 0xb3, 0xf0, 0x65, 0xad,
  0x26, 0x3a, 0x63, 0xf0, 0xb9, 0x21, 0x4a, 0xdb, 0x25, 0x77, 0xf3, 0xb7,
  0xef, 0x7c, 0xe5, 0x41, 0xbf, 0x39, 0x4f, 0x0d, 0xa9, 0x00, 0xee, 0xa1,
  0x10, 0x21, 0x21, 0x2f, 0x3f, 0x81, 0x2e, 0x71, 0x8f, 0xb7, 0xd4, 0xe2,
  0x25, 0x8b, 0x27, 0xa8, 0xd0, 0x72, 0xea, 0x1b, 0x56, 0x50, 0x53, 0x82,
  0x0b, 0x83, 0x8f, 0xb1, 0x7b, 0xff, 0xb5, 0x8c, 0x45, 0xdc, 0xf1, 0x0d,
  0xbb, 0x88, 0x8f, 0x28, 0x1b, 0x17, 0xf2, 0x35, 0x7f, 0x23, 0x98, 0xf9,
  0x06, 0x85, 0xb3, 0xe4, 0x93, 0x9f, 0x65, 0xb1, 0x60, 0x46, 0xd5, 0x89,
  0xfe, 0x27, 0xc9, 0x97, 0x27, 0x1a, 0x9a, 0x60, 0xc9, 0x40, 0x8c, 0xe9,
  0xdf, 0x02, 0x03, 0x01, 0x00, 0x01
};
const unsigned int platform_pub_len = 294;
