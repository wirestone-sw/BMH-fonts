// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font yellowtail_regular_24

#include "font.h"
#include "yellowtail_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,128,192,96,48,16,152,248,248,128,224,120,28,7,3,128,192,236,62,31,7,0,7,15,12,12,6,7,3,1,0,0,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,128,192,224,240,112,0,0,128,224,120,61,15,3,1,0,12,30,7,1,0,0,0,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,192,224,112,48,56,216,248,112,0,0,128,192,227,243,120,60,14,7,3,1,0,12,15,15,15,15,14,14,6,6,0,0,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,128,192,96,112,48,152,216,248,112,0,0,3,3,25,28,62,247,243,33,0,0,14,12,12,12,6,6,3,1,0,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,192,96,176,208,120,56,8,48,60,62,55,243,241,124,62,63,57,24,0,0,0,0,12,15,7,1,0,0,0,0,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,128,224,112,48,48,48,48,48,48,0,0,0,12,15,15,13,140,252,120,0,0,0,0,6,15,12,12,12,6,3,3,0,0,0,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,128,192,224,112,48,56,24,28,128,224,120,30,15,15,132,230,126,28,0,0,0,7,15,12,12,6,7,3,1,0,0,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,48,48,56,56,56,152,216,120,56,0,0,128,224,112,60,14,7,3,0,0,0,4,15,7,1,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,192,224,48,24,24,152,248,240,112,48,16,0,128,192,224,112,63,31,62,254,227,1,0,0,0,0,0,2,15,15,12,12,12,6,7,3,0,0,0,0,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,128,192,224,48,24,24,12,204,252,120,0,0,30,159,217,216,104,60,30,15,3,1,0,14,6,7,3,1,0,0,0,0,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,0,0,0,0,24,28,12,12,14,6,0,0,0,0};

static const uint8_t char_width[] = {13,10,13,12,13,14,13,12,16,13,7};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t yellowtail_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};