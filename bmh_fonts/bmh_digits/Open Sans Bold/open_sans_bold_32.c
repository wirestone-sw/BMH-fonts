// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_bold_32

#include "font.h"
#include "open_sans_bold_32.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,224,248,252,254,254,63,15,15,15,15,63,254,254,252,248,224,0,255,255,255,255,255,255,0,0,0,0,0,0,255,255,255,255,255,254,0,15,63,127,255,255,248,224,224,224,224,248,255,255,127,63,15,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,0,0,0,0,0,64,224,240,240,248,124,62,255,255,255,255,255,0,0,1,1,0,0,0,255,255,255,255,255,0,0,0,0,0,0,0,255,255,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,60,62,62,31,15,15,15,15,15,31,255,254,254,252,240,0,0,0,0,0,0,0,128,192,224,240,248,254,127,63,31,15,3,0,192,224,240,252,254,255,255,239,231,227,225,224,224,224,224,224,224,224};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,12,30,30,31,15,15,15,15,15,31,63,254,254,254,252,240,0,0,0,0,0,60,60,60,60,60,60,126,127,247,247,227,227,192,0,248,240,240,224,224,224,224,224,224,224,240,248,255,255,127,127,63,7};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,192,224,248,252,255,255,255,255,255,0,0,0,128,192,240,248,254,63,31,7,1,0,255,255,255,255,255,0,0,0,15,15,15,15,15,15,15,15,15,15,255,255,255,255,255,15,15,15};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,127,15,15,15,15,15,15,15,15,15,0,31,31,63,31,31,30,30,30,30,62,126,254,252,252,248,224,240,240,240,224,224,224,224,224,224,240,248,255,255,127,63,31};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,224,248,252,252,126,62,30,31,15,15,15,15,15,15,0,0,252,255,255,255,255,241,60,28,30,30,30,62,126,254,252,248,240,192,1,15,63,127,255,254,240,240,224,224,224,240,248,255,255,127,63,15};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,15,15,15,15,15,15,15,15,15,15,207,255,255,255,255,63,15,0,0,0,0,0,0,0,128,240,252,255,255,255,31,7,1,0,0,0,0,0,0,224,248,254,255,255,127,15,3,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,252,254,254,255,31,15,15,15,15,31,255,254,254,252,240,0,0,128,195,231,255,255,255,126,62,126,126,255,255,247,231,195,128,0,30,63,127,255,255,241,240,224,224,224,224,240,249,255,255,127,63,14};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,224,248,252,254,254,63,31,15,15,15,31,31,254,254,252,248,224,0,7,31,63,127,255,252,248,240,240,240,112,120,30,255,255,255,255,127,0,0,224,224,224,224,224,224,240,240,248,252,127,127,63,15,3,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,128,192,192,192,192,128,7,15,15,15,15,7,240,248,248,248,248,240};

static const uint8_t char_width[] = {18,12,18,18,18,16,18,18,18,18,6};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_bold_32 = {
    32,
    char_values,
    char_addr,
    char_width
};