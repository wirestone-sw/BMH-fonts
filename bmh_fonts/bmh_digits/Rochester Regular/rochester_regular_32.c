// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font rochester_regular_32

#include "font.h"
#include "rochester_regular_32.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,128,128,128,64,0,128,128,128,0,0,0,0,128,248,254,31,3,0,0,0,0,0,0,3,63,252,240,0,127,255,255,0,0,0,0,0,0,0,0,0,0,255,255,63,0,7,31,62,96,192,128,128,128,128,192,112,62,31,7,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,128,192,0,0,0,0,8,8,12,4,6,255,255,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,128,128,128,128,192,255,255,192,128,128,128};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,128,64,64,32,32,32,32,32,96,192,128,0,0,0,126,255,225,192,192,192,96,0,0,0,0,128,243,255,124,0,0,128,192,96,32,48,24,28,12,14,7,3,3,0,0,112,62,11,12,12,12,28,28,56,56,112,112,112,112,48,12};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,128,128,64,64,64,64,192,128,128,0,0,0,8,62,127,97,0,0,0,0,128,224,127,63,15,0,0,192,64,0,0,4,6,14,13,13,28,56,248,240,192,63,127,112,192,192,128,128,128,128,128,64,96,57,31,15};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,192,192,192,0,0,0,0,0,0,0,0,0,0,128,192,248,63,31,3,0,128,0,0,192,96,112,88,76,70,67,129,128,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,1,1,255,255,255,1,1};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,128,128,128,128,128,128,128,128,128,128,128,64,0,0,0,255,159,131,131,131,3,3,3,3,1,1,0,0,0,0,128,192,1,1,1,1,1,3,3,7,14,28,124,248,224,30,63,120,96,192,128,128,128,128,128,128,192,96,56,31,15};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,128,128,192,0,0,0,0,0,128,224,248,60,14,6,3,1,0,0,0,0,0,0,252,255,255,57,12,4,2,2,2,2,6,12,124,248,240,1,15,31,60,96,192,128,128,128,128,192,96,60,31,15};
// '7'
static const uint8_t bitmap_55[] = {0,128,128,192,128,128,128,128,128,0,0,0,0,128,128,7,3,1,1,1,1,3,131,227,51,27,7,3,1,0,0,0,0,0,0,240,254,7,0,0,0,0,0,0,0,0,0,0,0,127,255,255,240,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,128,128,64,64,64,64,64,128,128,0,0,0,0,0,0,28,127,251,224,192,128,128,0,128,192,127,62,0,0,0,128,224,240,24,8,5,3,3,7,15,14,30,60,120,240,224,0,15,31,56,96,192,128,128,128,128,128,128,128,64,112,63,15,1};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,128,128,128,64,64,128,128,128,0,0,0,0,248,254,255,3,0,0,0,0,0,0,3,255,254,248,0,3,15,15,28,16,16,48,16,16,24,12,247,255,127,7,0,0,0,0,128,192,64,96,48,28,15,7,1,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,24,56,56,24,56,56};

static const uint8_t char_width[] = {16,11,16,15,16,16,15,15,17,15,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t rochester_regular_32 = {
    32,
    char_values,
    char_addr,
    char_width
};