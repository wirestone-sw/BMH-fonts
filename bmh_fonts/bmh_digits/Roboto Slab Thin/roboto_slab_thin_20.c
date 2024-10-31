// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_slab_thin_20

#include "font.h"
#include "roboto_slab_thin_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,248,4,2,1,1,1,1,2,6,248};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,2,1,1,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,28,2,1,1,1,1,1,194,60};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,12,2,1,129,129,129,129,66,60};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,128,96,16,12,2,255,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,248,135,65,65,65,65,65,129,3};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,248,132,66,33,33,33,33,65,128,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,7,1,1,1,1,193,49,9,7,1};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,28,98,65,129,129,129,129,65,38,24};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,248,6,1,1,1,1,1,2,252};
// ':'
static const uint8_t bitmap_58[] = {0,16};

static const uint8_t char_width[] = {10,4,9,9,11,9,10,10,10,9,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_slab_thin_20 = {
    20,
    char_values,
    char_addr,
    char_width
};