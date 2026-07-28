#include "resistor_color.h"

static const resistor_band_t ACTUAL_RES_BANDS[MAX_RES_BAND_COLORS] = {RESISTOR_BANDS};

resistor_band_t color_code(resistor_band_t color){
	return color;
}

const resistor_band_t *colors(void){
	return ACTUAL_RES_BANDS;
}
