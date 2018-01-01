#pragma once

const unsigned char PROGMEM Tiles[] =
{
// width, height,
8, 8,
// TILE 00
0x00, 0x3c, 0x00, 0x7e, 0x7e, 0x7e, 0x3c, 0x00, 
// TILE 01
0x00, 0x3c, 0x00, 0x7e, 0x7e, 0x00, 0x00, 0x00, 
// TILE 02
0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// TILE 03
0x00, 0x7e, 0x66, 0x42, 0x66, 0x3c, 0x00, 0x00, 
// TILE 04
0x00, 0x24, 0x42, 0x42, 0x24, 0x3c, 0x3c, 0x00, 
// TILE 05
0x00, 0x3c, 0x42, 0x5a, 0x5a, 0x42, 0x3c, 0x00, 
// TILE 06
0x00, 0x00, 0x18, 0x00, 0x18, 0x18, 0x00, 0x00, 
};

const unsigned char PROGMEM Title[] =
{
// width, height,
128, 64,
0xff, 0x41, 0x41, 0x41, 0x81, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xc1, 0x31, 0x11, 0x11, 0x11, 0x31, 0x61, 0xc1, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xff, 
0xff, 0x20, 0x40, 0x40, 0x31, 0xef, 0x40, 0x90, 0x18, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0c, 0x04, 0x04, 0x04, 0xc4, 0x6c, 0x38, 0x18, 0x34, 0x66, 0x42, 0xc2, 0x87, 0x0c, 0x08, 0x08, 0x08, 0x0c, 0x04, 0x83, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
0xff, 0x00, 0x00, 0xfc, 0x07, 0x01, 0x00, 0x01, 0x03, 0x0e, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x01, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x00, 0x01, 0x02, 0x0c, 0xf8, 0x80, 0x00, 0x00, 0x03, 0x1e, 0x90, 0x90, 0x90, 0x9b, 0x06, 0x00, 0x00, 0x00, 0xff, 0x01, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x01, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x3c, 0x20, 0x20, 0x20, 0x37, 0x0c, 0x00, 0x00, 0xf0, 0x18, 0x08, 0x0c, 0x84, 0x84, 0xc4, 0x44, 0x44, 0xc4, 0x04, 0x0c, 0x08, 0x18, 0x30, 0x60, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x10, 0x18, 0x08, 0x08, 0x08, 0x88, 0x88, 0x88, 0x98, 0x10, 0x10, 0x30, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
0xff, 0x00, 0x00, 0x7f, 0x80, 0x02, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x00, 0x00, 0x1c, 0xff, 0x31, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0xe0, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0xfe, 0x63, 0x01, 0x01, 0x07, 0xfc, 0x00, 0xf8, 0x0f, 0x00, 0x00, 0x07, 0x0d, 0x08, 0x08, 0x08, 0x0c, 0x07, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x1d, 0x07, 0x00, 0xfc, 0x07, 0x01, 0x00, 0x00, 0xe0, 0x9e, 0x03, 0x01, 0x00, 0x00, 0x01, 0xc1, 0x7e, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
0xff, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x04, 0x00, 0x00, 0xfc, 0x0c, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0c, 0x04, 0x06, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xf8, 0x07, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x04, 0x04, 0x08, 0x08, 0x18, 0xe0, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x04, 0x04, 0x08, 0x08, 0x18, 0xe0, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x06, 0x02, 0x02, 0x03, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x38, 0x20, 0x60, 0x80, 0x00, 0x03, 0x06, 0x04, 0x04, 0x06, 0x03, 0x01, 0xfc, 0x87, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
0xff, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0e, 0x18, 0x70, 0x41, 0x87, 0x8c, 0x98, 0xa0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x10, 0x18, 0x18, 0x14, 0x17, 0x11, 0x18, 0x08, 0x0c, 0x03, 0x01, 0x00, 0x00, 0x00, 0x07, 0x0d, 0x08, 0x08, 0x0c, 0x07, 0x00, 0x00, 0x00, 0x01, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x01, 0x00, 0x01, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x01, 0x00, 0x0e, 0x1b, 0x10, 0x10, 0x18, 0x0f, 0x00, 0x00, 0x3f, 0xe0, 0x80, 0x80, 0x80, 0xc3, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0c, 0x18, 0x10, 0x30, 0x60, 0x40, 0x40, 0xc1, 0x82, 0x86, 0x0c, 0x98, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x50, 0x70, 0x00, 0xf0, 0x50, 0xb0, 0x00, 0xf0, 0x50, 0x10, 0x00, 0x70, 0x50, 0xd0, 0x00, 0x70, 0x50, 0xd0, 0x00, 0x40, 0x00, 0xf0, 0x50, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x81, 0x80, 0x81, 0x80, 0x81, 0x81, 0x81, 0x80, 0x81, 0x81, 0x81, 0x80, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x81, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 
};

const unsigned char PROGMEM MainLogo[] =
{
// width, height,
53, 34,
0x70, 0x54, 0x8a, 0x74, 0x8b, 0x89, 0x8b, 0x74, 0x8a, 0x54, 0x70, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xf0, 0x10, 0x10, 0x10, 0xf0, 0xe0, 0x00, 0xf0, 0xf0, 0x10, 0x10, 0xf0, 0xe0, 0x00, 0x00, 0xe0, 0xf0, 0x90, 0x90, 0x90, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x01, 0x02, 0x01, 0x06, 0x04, 0x06, 0x01, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc3, 0xe2, 0x22, 0x22, 0x22, 0x22, 0x00, 0x01, 0x03, 0x02, 0x02, 0x02, 0x03, 0x01, 0x00, 0x03, 0x03, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x01, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1f, 0x38, 0x20, 0x20, 0x20, 0x20, 0x00, 0x1e, 0x3f, 0x21, 0x21, 0x21, 0x3f, 0x1e, 0x00, 0x9e, 0xbf, 0xa1, 0xa1, 0xa1, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xfc, 0x8e, 0x02, 0x02, 0x02, 0x02, 0x00, 0xe0, 0xf0, 0x10, 0x10, 0x10, 0xf0, 0xe0, 0x00, 0xe0, 0xf0, 0x10, 0x10, 0x10, 0xfc, 0xfc, 0x00, 0xe0, 0xf0, 0x90, 0x90, 0x90, 0xf0, 0xf0, 0x00, 0xf0, 0xf0, 0x60, 0x10, 0x10, 0x30, 0x20, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x02, 0x02, 0x02, 0x02, 0x00, 0x01, 0x03, 0x02, 0x02, 0x02, 0x03, 0x01, 0x00, 0x01, 0x03, 0x02, 0x02, 0x02, 0x03, 0x03, 0x00, 0x01, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM Arrow[] =
{
// width, height,
4, 5,
0x1f, 0x1f, 0x0e, 0x04, 
};

const unsigned char PROGMEM Speaker[] =
{
// width, height,
8, 8,
// TILE 00
0x3c, 0x7e, 0x7e, 0x00, 0x70, 0xa8, 0xa8, 0x70, 
// TILE 01
0x3c, 0x7e, 0x7e, 0x00, 0x3c, 0x00, 0x7e, 0x00, 
};
