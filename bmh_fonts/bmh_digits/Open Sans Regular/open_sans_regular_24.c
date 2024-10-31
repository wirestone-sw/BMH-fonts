// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_regular_24

#include "font.h"
#include "open_sans_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,224,112,56,24,24,24,56,112,224,192,0,254,255,135,0,0,0,0,0,0,0,255,255,124,0,7,15,28,56,48,48,48,56,28,15,7,0};
// '1'
static const uint8_t bitmap_49[] = {192,96,112,48,248,248,0,0,0,0,255,255,0,0,0,0,63,63};
// '2'
static const uint8_t bitmap_50[] = {0,96,48,56,24,24,24,24,56,112,224,192,0,0,0,0,0,0,128,192,96,48,30,15,3,0,48,56,60,54,51,49,48,48,48,48,48,48,48};
// '3'
static const uint8_t bitmap_51[] = {0,112,48,56,24,24,24,24,56,112,240,192,0,0,0,24,24,24,24,24,60,54,231,225,24,24,48,48,48,48,48,48,56,24,31,15};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,192,112,56,248,248,0,0,128,224,112,28,14,3,1,0,0,255,255,0,0,3,3,3,3,3,3,3,3,3,63,63,3,3};
// '5'
static const uint8_t bitmap_53[] = {128,248,120,24,24,24,24,24,24,24,0,15,15,12,12,12,12,12,28,24,248,240,24,48,48,48,48,48,48,56,28,15,7};
// '6'
static const uint8_t bitmap_54[] = {0,0,192,224,112,48,24,24,24,24,24,0,0,32,255,255,24,24,12,12,12,12,28,120,240,192,0,7,15,28,56,48,48,48,48,56,30,15,3};
// '7'
static const uint8_t bitmap_55[] = {24,24,24,24,24,24,24,24,24,152,248,120,24,0,0,0,0,0,0,192,248,62,15,3,0,0,0,0,0,48,60,31,7,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,224,240,48,24,24,24,24,24,48,240,224,0,0,195,231,62,60,24,24,56,60,118,231,193,0,7,15,28,56,48,48,48,48,48,24,30,15,3};
// '9'
static const uint8_t bitmap_57[] = {0,224,240,48,24,24,24,24,56,112,224,192,0,7,31,60,112,96,96,96,96,48,48,255,255,28,0,0,48,48,48,48,48,24,28,14,7,3,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,7,7,7,56,56,56};

static const uint8_t char_width[] = {13,6,13,12,13,11,13,13,13,13,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};