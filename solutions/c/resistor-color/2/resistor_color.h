#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

#define MAX_RES_BAND_COLORS (10)

#define RESISTOR_BANDS BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE

typedef enum {
	RESISTOR_BANDS
} resistor_band_t;

resistor_band_t color_code(resistor_band_t color);

const resistor_band_t *colors();

#endif
