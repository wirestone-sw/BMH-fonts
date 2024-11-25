// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_black_italic_24

#include "font.h"
#include "roboto_black_italic_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,240,252,254,255,15,3,3,3,255,255,255,252,63,255,255,255,195,128,128,192,248,255,255,63,7,0,0,1,3,3,3,3,3,1,1,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {28,28,14,14,254,255,255,255,7,0,0,192,255,255,255,127,1,0,0,0,3,3,3,3,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,24,30,31,31,7,3,131,199,255,255,255,126,128,192,224,240,248,252,254,191,159,143,135,129,128,0,3,3,3,3,3,3,3,3,3,3,3,3,3,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,12,14,15,207,199,195,195,227,255,127,127,62,48,240,240,240,224,129,129,129,193,255,255,255,126,0,0,0,1,3,3,3,3,3,3,1,1,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,224,248,124,255,255,255,255,15,128,120,124,126,127,119,115,240,254,255,255,127,115,48,0,0,0,0,0,0,0,7,7,7,7,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,192,248,255,255,223,199,199,199,199,135,7,7,3,224,225,227,227,131,1,1,129,255,255,255,255,0,0,0,3,3,7,7,7,7,7,3,3,1,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,192,224,248,252,188,222,206,207,199,135,135,0,126,255,255,255,131,1,1,129,227,255,255,255,62,0,1,3,7,7,7,7,7,7,3,1,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,7,7,7,7,7,7,199,247,255,255,127,31,7,0,0,128,224,248,252,255,63,15,3,0,0,0,0,4,6,7,7,7,3,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,124,254,255,255,135,131,195,255,255,255,126,248,252,254,255,199,131,131,195,255,255,254,124,0,0,1,1,3,3,3,3,3,3,1,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {248,252,254,255,15,3,3,3,255,255,254,252,3,135,143,143,207,206,230,255,127,63,31,3,0,3,3,3,3,1,1,0,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,192,224,224,224,192,128,128,129,1,1,0,7,7,7,3,0,0};

static const uint8_t char_width[] = {13,9,14,14,14,14,13,14,13,12,6};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_black_italic_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
