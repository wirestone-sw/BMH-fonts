// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font nokora_regular_32

#include "font.h"
#include "nokora_regular_32.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,224,240,240,120,56,56,56,56,120,240,224,192,128,0,252,255,255,3,0,0,0,0,0,0,0,0,3,255,255,252,31,255,255,224,128,0,0,0,0,0,0,128,224,255,255,31,0,0,3,7,7,15,14,14,14,14,15,7,7,3,0,0};
// '1'
static const uint8_t bitmap_49[] = {0,128,192,224,240,112,248,248,248,1,3,1,0,0,0,255,255,255,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,15,15,15};
// '2'
static const uint8_t bitmap_50[] = {64,224,112,112,56,56,56,56,56,120,240,240,224,128,0,0,0,0,0,0,0,0,0,0,128,224,255,127,15,0,0,0,128,192,240,120,60,30,15,7,1,0,0,0,0,14,15,15,15,14,14,14,14,14,14,14,14,14,14,14};
// '3'
static const uint8_t bitmap_51[] = {96,224,112,112,56,56,56,56,56,120,240,240,224,128,0,0,0,0,0,192,192,192,192,192,224,176,63,31,7,0,0,0,0,0,1,1,1,1,1,1,3,135,255,254,252,7,7,15,14,14,14,14,14,14,15,7,7,3,1,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,192,224,112,248,248,248,0,0,0,0,0,0,0,128,224,240,60,30,7,3,1,0,255,255,255,0,0,0,0,56,62,63,59,57,56,56,56,56,56,56,56,255,255,255,56,56,56,56,0,0,0,0,0,0,0,0,0,0,0,0,15,15,15,0,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,248,248,120,56,56,56,56,56,56,56,56,0,0,0,127,255,255,224,224,224,224,224,224,224,192,128,0,0,0,0,0,0,0,0,0,0,0,1,1,131,255,255,126,7,7,15,14,14,14,14,14,14,15,7,7,3,1,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,224,240,112,120,56,56,56,56,56,56,0,0,240,254,255,199,97,96,48,48,48,48,48,112,224,192,128,0,63,255,255,225,128,0,0,0,0,0,0,0,193,255,255,127,0,0,3,3,7,15,14,14,14,14,15,7,7,3,1,0};
// '7'
static const uint8_t bitmap_55[] = {56,56,56,56,56,56,56,56,56,56,56,56,184,248,248,120,0,0,0,0,0,0,0,0,0,192,248,254,31,7,1,0,0,0,0,0,0,192,240,252,63,15,3,0,0,0,0,0,0,0,0,8,14,15,7,1,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,192,224,240,240,120,56,56,56,56,120,240,240,224,192,0,0,7,31,63,240,224,224,64,192,224,224,176,63,31,7,0,248,252,254,135,1,0,0,0,0,0,1,3,135,254,252,248,0,3,7,7,15,14,14,14,14,14,14,7,7,3,3,0};
// '9'
static const uint8_t bitmap_57[] = {0,192,224,240,112,120,56,56,56,56,120,240,224,224,128,0,127,255,255,129,0,0,0,0,0,0,0,0,195,255,255,254,0,0,1,3,7,6,6,6,6,6,131,195,241,255,63,7,0,0,14,14,14,14,14,14,15,7,7,3,1,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,28,62,62,28,0,0,0,0,14,31,31,14};

static const uint8_t char_width[] = {16,9,15,15,19,15,16,16,16,16,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t nokora_regular_32 = {
    32,
    char_values,
    char_addr,
    char_width
};