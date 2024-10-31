// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_semibold_italic_24

#include "font.h"
#include "open_sans_semibold_italic_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,192,224,240,112,56,56,56,120,240,240,192,240,255,255,15,1,0,0,0,0,224,255,255,63,7,31,31,60,56,56,56,28,31,15,7,1,0};
// '1'
static const uint8_t bitmap_49[] = {128,192,192,224,112,240,248,248,56,0,1,1,128,252,255,127,3,0,0,0,48,63,63,15,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,32,240,112,56,56,56,56,120,240,240,192,0,0,0,0,128,192,224,112,56,30,15,7,1,60,62,62,63,59,57,56,56,56,56,56,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,32,112,112,56,56,56,56,120,240,240,192,0,0,0,0,48,56,56,56,120,236,238,207,7,1,28,28,56,56,56,56,56,56,60,31,31,15,1,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,192,240,248,248,248,24,192,224,240,188,142,135,131,193,252,255,191,129,128,3,3,3,3,3,3,51,63,63,7,3,3,1};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,224,248,248,56,56,56,56,56,56,56,0,0,30,31,31,28,28,28,124,248,248,224,0,28,56,56,56,56,56,56,28,30,15,7,1,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,192,224,240,112,112,56,56,56,56,56,192,252,255,127,59,24,28,28,28,252,248,240,0,3,15,31,60,56,56,56,56,30,31,15,3,0};
// '7'
static const uint8_t bitmap_55[] = {0,56,56,56,56,56,56,56,184,248,248,120,56,0,0,0,128,192,240,252,62,15,7,1,0,0,48,56,62,31,7,3,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,224,240,240,56,56,56,56,248,240,224,128,192,225,103,63,62,24,56,124,236,239,135,3,15,31,31,60,56,56,56,56,28,31,15,7,0};
// '9'
static const uint8_t bitmap_57[] = {0,128,224,240,240,120,56,56,56,120,240,224,128,0,31,63,127,120,112,112,112,184,252,255,255,15,56,56,56,56,56,56,28,30,15,7,3,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,0,0,15,15,15,16,60,60,28,0,0};

static const uint8_t char_width[] = {13,9,13,14,13,13,13,13,13,13,6};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_semibold_italic_24 = {
    24,
    char_values,
    char_addr,
    char_width
};