// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cousine_italic_8

#include "font.h"
#include "cousine_italic_8.h"

// '0'
static const uint8_t bitmap_48[] = {24,38,42,18,14};
// '1'
static const uint8_t bitmap_49[] = {32,34,62,34};
// '2'
static const uint8_t bitmap_50[] = {32,50,42,46,2};
// '3'
static const uint8_t bitmap_51[] = {34,42,62,2};
// '4'
static const uint8_t bitmap_52[] = {16,24,52,30};
// '5'
static const uint8_t bitmap_53[] = {46,38,58};
// '6'
static const uint8_t bitmap_54[] = {62,38,58,2};
// '7'
static const uint8_t bitmap_55[] = {32,26,6,2};
// '8'
static const uint8_t bitmap_56[] = {16,46,42,62,2};
// '9'
static const uint8_t bitmap_57[] = {46,42,30};
// ':'
static const uint8_t bitmap_58[] = {36};

static const uint8_t char_width[] = {5,4,5,4,4,3,4,4,5,3,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cousine_italic_8 = {
    8,
    char_values,
    char_addr,
    char_width
};