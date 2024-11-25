// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_italic_24

#include "font.h"
#include "arimo_italic_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,224,248,60,14,7,3,3,3,3,158,252,248,127,255,195,0,0,0,0,128,192,240,127,31,1,0,1,1,3,3,3,3,3,1,0,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,16,12,12,6,230,255,127,3,0,0,0,0,0,0,252,255,15,0,0,0,3,3,3,3,3,3,3,3,3,3,3};
// '2'
static const uint8_t bitmap_50[] = {0,0,28,30,6,3,3,3,3,135,254,254,56,192,224,96,48,24,28,12,6,7,3,1,0,0,3,3,3,3,3,3,3,3,3,3,1,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,24,30,14,7,3,3,3,131,254,254,56,224,224,128,0,2,3,3,3,135,255,252,48,0,0,1,1,3,3,3,3,3,1,1,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,224,48,24,142,255,255,15,48,56,60,55,51,49,48,48,240,255,63,49,48,0,0,0,0,0,0,0,0,3,3,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,192,248,255,143,195,195,195,195,131,131,3,3,224,225,129,1,0,0,0,0,129,247,255,62,0,0,1,1,3,3,3,3,3,1,1,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,192,240,60,142,198,195,195,195,131,135,14,12,28,255,255,129,0,0,0,0,128,255,127,30,0,0,0,1,3,3,3,3,3,1,1,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {3,3,3,3,3,195,227,115,59,15,7,3,0,224,248,62,15,3,0,0,0,0,0,0,3,3,3,0,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,124,254,134,3,3,3,3,135,254,254,56,248,252,134,2,3,3,3,3,135,255,252,56,0,0,1,3,3,3,3,3,3,1,1,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {0,240,252,30,6,3,3,3,3,7,254,252,192,193,135,7,12,12,12,140,198,251,63,15,0,1,3,3,3,3,3,1,1,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,96,112,112,128,128,128,0,0,3,3,3,0,0};

static const uint8_t char_width[] = {13,11,13,13,13,13,13,12,13,12,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t arimo_italic_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
