#pragma once

const unsigned char PROGMEM hero_sp[] =
{
// width, height,
8, 8,
//Down
// FRAME 00
0x00, 0xff, 0x17, 0xff, 0xf9, 0xff, 0x7f, 0xff, 
0x7f, 0xff, 0x79, 0xff, 0x17, 0xff, 0x20, 0xff, 

// FRAME 01
0x20, 0xff, 0x17, 0xff, 0x79, 0xff, 0x7f, 0xff, 
0x7f, 0xff, 0xf9, 0xff, 0x17, 0xff, 0x00, 0xff, 

//Up
// FRAME 02
0x00, 0xff, 0x17, 0xff, 0xff, 0xff, 0x47, 0xff, 
0x47, 0xff, 0x7f, 0xff, 0x17, 0xff, 0x20, 0xff, 

// FRAME 03
0x20, 0xff, 0x17, 0xff, 0x7f, 0xff, 0x47, 0xff, 
0x47, 0xff, 0xff, 0xff, 0x17, 0xff, 0x00, 0xff,
};

const unsigned char PROGMEM cootie_sp[] =
{
// width, height,
8, 8,
// FRAME 00
0x3c, 0xff, 0x42, 0xff, 0x8d, 0xff, 0xa1, 0xff, 
0x8d, 0xff, 0x42, 0xff, 0x3c, 0xff, 0x00, 0xff, 

// FRAME 01
0x30, 0xff, 0x48, 0xff, 0x94, 0xff, 0x84, 0xff, 
0x84, 0xff, 0x94, 0xff, 0x48, 0xff, 0x30, 0xff,
};

const unsigned char PROGMEM hearts_sp[] =
{
// width, height,
25, 8,
// FRAME 00
0x00, 0xff, 0x0c, 0xff, 0x1e, 0xff, 0x3e, 0xff, 0x7c, 0xff, 0x3e, 0xff, 0x1e, 0xff, 0x0c, 0xff, 0x00, 0xff, 0x18, 0xff, 0x3c, 0xff, 0x7c, 0xff, 0xf8, 
0xff, 0x7c, 0xff, 0x3c, 0xff, 0x18, 0xff, 0x00, 0xff, 0x0c, 0xff, 0x1e, 0xff, 0x3e, 0xff, 0x7c, 0xff, 0x3e, 0xff, 0x1e, 0xff, 0x0c, 0xff, 0x00, 0xff, 

// FRAME 01
0x00, 0xff, 0x18, 0xff, 0x3c, 0xff, 0x7c, 0xff, 0xf8, 0xff, 0x7c, 0xff, 0x3c, 0xff, 0x18, 0xff, 0x00, 0xff, 0x0c, 0xff, 0x1e, 0xff, 0x3e, 0xff, 0x7c, 
0xff, 0x3e, 0xff, 0x1e, 0xff, 0x0c, 0xff, 0x00, 0xff, 0x18, 0xff, 0x3c, 0xff, 0x7c, 0xff, 0xf8, 0xff, 0x7c, 0xff, 0x3c, 0xff, 0x18, 0xff, 0x00, 0xff,
};

const unsigned char PROGMEM title_sp[] =
{
// width, height,
96, 40,
// FRAME 00
0x00, 0x00, 0xc0, 0xe0, 0xf0, 0x30, 0x30, 0xe0, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x1f, 0x7f, 0x7f, 0x7f, 0x40, 0x40, 0x33, 0x00, 0x00, 0x1f, 0x7f, 0x7f, 0x40, 0x40, 0x7f, 0x3f, 0x1e, 0x00, 0x00, 0x1f, 0x7f, 0x7f, 0x40, 0x40, 0x7f, 0x3f, 0x1e, 0x00, 0x00, 0x07, 0x2f, 0x07, 0x3f, 0x7f, 0x7f, 0x07, 0x1f, 0x07, 0x00, 0x00, 0x3f, 0x7f, 0x7f, 0x00, 0x00, 0x3f, 0x7f, 0x5b, 0x5b, 0x4b, 0x23, 0x23, 0x00, 0x00, 0x37, 0x77, 0x67, 0x42, 0x66, 0x7e, 0x7c, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0xc0, 0x80, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x7f, 0xff, 0x30, 0x18, 0x30, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x0e, 0x0f, 0x0f, 0x7f, 0xff, 0xff, 0x0f, 0x0f, 0x0e, 0x00, 0x00, 0x0e, 0x0f, 0x0f, 0x7f, 0xff, 0xff, 0x0f, 0x0f, 0x0e, 0x00, 0x00, 0x3e, 0x7f, 0xff, 0x30, 0x18, 0x30, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x3c, 0xff, 0xff, 0xff, 0x80, 0x80, 0x67, 0x00, 0x00, 0x7f, 0xff, 0xff, 0x7f, 0x1c, 0x3f, 0xf7, 0x63, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// FRAME 01
0x00, 0x00, 0xc0, 0xe0, 0xf0, 0x30, 0x30, 0xe0, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x1f, 0x7f, 0xff, 0x7f, 0x40, 0x40, 0xb3, 0x00, 0x00, 0x1f, 0x7f, 0x7f, 0x40, 0x40, 0x7f, 0x3f, 0x1e, 0x00, 0x00, 0x1f, 0x7f, 0x7f, 0x40, 0x40, 0x7f, 0x3f, 0x1e, 0x00, 0x00, 0x07, 0x87, 0x07, 0x3f, 0x7f, 0x7f, 0x07, 0x87, 0x27, 0x00, 0x00, 0x3f, 0x7f, 0x7f, 0x00, 0x00, 0x3f, 0x7f, 0x5b, 0x5b, 0x4b, 0x23, 0x23, 0x00, 0x00, 0x37, 0x77, 0x67, 0x42, 0x66, 0x7e, 0x7c, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x10, 0xa0, 0xc0, 0xc1, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0xc0, 0x80, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x7f, 0xff, 0x30, 0x18, 0x30, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x0e, 0x0f, 0x0f, 0x7f, 0xff, 0xff, 0x0f, 0x0f, 0x0e, 0x00, 0x00, 0x0e, 0x0f, 0x0f, 0x7f, 0xff, 0xff, 0x0f, 0x0f, 0x0e, 0x00, 0x00, 0x3e, 0x7f, 0xff, 0x30, 0x18, 0x30, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x3c, 0xff, 0xff, 0xff, 0x80, 0x80, 0x67, 0x00, 0x00, 0x7f, 0xff, 0xff, 0x7f, 0x1c, 0x3f, 0xf7, 0x63, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// FRAME 02
0x00, 0x00, 0xc0, 0xe0, 0xf0, 0x30, 0x30, 0xe0, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x1f, 0x7f, 0x7f, 0x7f, 0x40, 0x40, 0x33, 0x00, 0x00, 0x1f, 0x7f, 0x7f, 0x40, 0x40, 0x7f, 0x3f, 0x1e, 0x00, 0x00, 0x1f, 0x7f, 0x7f, 0x40, 0x40, 0x7f, 0x3f, 0x1e, 0x00, 0x00, 0x07, 0x2f, 0x07, 0x3f, 0x7f, 0x7f, 0x07, 0x07, 0x07, 0x00, 0x00, 0x3f, 0x7f, 0x7f, 0x00, 0x00, 0x3f, 0x7f, 0x5b, 0x5b, 0x4b, 0x23, 0x23, 0x00, 0x00, 0x37, 0x77, 0x67, 0x42, 0x66, 0x7e, 0x7c, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x80, 0xc0, 0xf0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0xc0, 0x80, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x7f, 0xff, 0x30, 0x18, 0x30, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x0e, 0x0f, 0x0f, 0x7f, 0xff, 0xff, 0x0f, 0x0f, 0x0e, 0x00, 0x00, 0x0e, 0x0f, 0x0f, 0x7f, 0xff, 0xff, 0x0f, 0x0f, 0x0e, 0x00, 0x00, 0x3e, 0x7f, 0xff, 0x30, 0x18, 0x30, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x3c, 0xff, 0xff, 0xff, 0x80, 0x80, 0x67, 0x00, 0x00, 0x7f, 0xff, 0xff, 0x7f, 0x1c, 0x3f, 0xf7, 0x63, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char PROGMEM push_sp[] =
{
// width, height,
96, 16,
// FRAME 00
0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x20, 0x90, 0xd0, 0x90, 0x20, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0x0f, 0x03, 0x03, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0x0c, 0x0c, 0x00, 0x0c, 0x0c, 0x0f, 0x0f, 0x00, 0x0c, 0x0c, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x06, 0x0d, 0x0c, 0x0d, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0c, 0x0c, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x03, 0x03, 0x0f, 0x0f, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 
// FRAME 01
0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0xc8, 0x68, 0xc8, 0x10, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0x0f, 0x03, 0x03, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0x0c, 0x0c, 0x00, 0x0c, 0x0c, 0x0f, 0x0f, 0x00, 0x0c, 0x0c, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x05, 0x0a, 0x0a, 0x0a, 0x05, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0c, 0x0c, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x03, 0x03, 0x0f, 0x0f, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char PROGMEM over[] =
{
// width, height,
120, 16,
// FRAME 00
0xc0, 0xf0, 0xf0, 0xfc, 0xfe, 0xfe, 0x0e, 0x0e, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xf0, 0x30, 0x30, 0x30, 0x30, 0xf0, 0xf0, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xf0, 0xf0, 0xc0, 0xc0, 0x00, 0xc0, 0xc0, 0xf0, 0xc0, 0xc0, 0x00, 0x00, 0xe0, 0xe0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf0, 0xf0, 0xfc, 0x3c, 0x3c, 0x3c, 0xfc, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xf0, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0xe0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xe0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xe0, 0xf0, 0x30, 0x30, 0x30, 0xf0, 0xe0, 0xe0, 0xc0, 
0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x90, 0x71, 0x71, 0x00, 0x00, 0x00, 0x1f, 0x7f, 0x7f, 0xff, 0x70, 0x18, 0x18, 0x70, 0xff, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0xff, 0x7f, 0x0f, 0x0f, 0x1e, 0x0f, 0x0f, 0xff, 0x7f, 0x7f, 0x00, 0x00, 0x7f, 0x7f, 0xff, 0x99, 0x99, 0x99, 0x89, 0x61, 0x61, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x80, 0x80, 0x80, 0xff, 0x7f, 0x7f, 0x1f, 0x00, 0x00, 0x00, 0x07, 0x1f, 0x1f, 0xff, 0xf8, 0xf8, 0xf0, 0x78, 0x1f, 0x1f, 0x0f, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0x99, 0x99, 0x99, 0x89, 0x61, 0x61, 0x61, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0x18, 0x18, 0x18, 0x7e, 0xef, 0xef, 0x87,
};