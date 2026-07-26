#ifndef DARTS_H
#define DARTS_H

#include <stdint.h>

typedef struct{
	float pos_x;
	float pos_y;
} coordinate_t;

uint8_t score(coordinate_t land_coordinate);

#endif
