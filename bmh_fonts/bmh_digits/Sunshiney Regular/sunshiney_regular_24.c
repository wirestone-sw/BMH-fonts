// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font sunshiney_regular_24

#include "font.h"
#include "sunshiney_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,240,60,12,12,12,12,12,12,24,56,224,192,124,255,131,0,0,0,0,0,0,0,128,192,127,31,0,1,3,3,6,6,6,2,3,3,1,1,0,0};
// '1'
static const uint8_t bitmap_49[] = {64,224,120,252,108,0,0,252,255,0,0,0,3,7,0};
// '2'
static const uint8_t bitmap_50[] = {64,112,24,8,12,12,12,248,112,0,0,0,0,192,224,48,28,15,3,0,0,0,12,7,7,6,2,6,6,12,12,12,4};
// '3'
static const uint8_t bitmap_51[] = {32,48,24,8,12,152,248,32,0,0,0,128,192,192,204,70,7,7,6,204,248,16,7,7,12,12,12,12,6,6,3,1,0};
// '4'
static const uint8_t bitmap_52[] = {0,128,248,56,0,0,224,252,12,28,31,27,24,24,248,255,63,24,0,0,0,0,0,3,15,14,0};
// '5'
static const uint8_t bitmap_53[] = {252,248,12,12,12,12,12,4,0,0,0,15,159,204,76,198,198,6,6,12,252,248,3,15,12,8,8,8,12,6,7,3,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,224,120,28,12,6,6,0,0,0,0,248,255,7,57,124,126,99,35,3,3,131,254,124,0,3,7,6,6,12,4,4,6,2,3,0,0};
// '7'
static const uint8_t bitmap_55[] = {60,124,12,12,12,12,12,204,236,60,28,0,0,0,192,248,60,7,1,0,0,0,0,0,0,3,7,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,96,248,152,140,140,132,132,204,252,56,0,240,248,31,7,3,1,1,1,129,231,126,24,1,3,3,6,6,6,2,3,1,1,0,0};
// '9'
static const uint8_t bitmap_57[] = {0,192,240,48,24,136,140,140,136,24,248,240,0,2,15,30,24,17,25,28,15,135,224,120,31,4,0,0,0,0,0,12,14,7,3,1,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,56,56,16,6,6,0};

static const uint8_t char_width[] = {14,5,11,11,9,11,13,11,12,13,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t sunshiney_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
