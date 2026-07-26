#ifndef GRAINS_H
#define GRAINS_H

#include <stdint.h>

#define MAX_SQUARE_INDEX ((uint8_t)64)
#define MIN_SQUARE_INDEX ((uint8_t)1)

uint64_t square(uint8_t index);
uint64_t total(void);

#endif
