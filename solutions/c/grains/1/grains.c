#include "grains.h"

uint64_t square(uint8_t index){
	if((MIN_SQUARE_INDEX > index) || (index > MAX_SQUARE_INDEX)){
		return 0;
	}
	else{
		return (((uint64_t)(1)) << (index - 1));
	}
}

uint64_t total(void){
	uint64_t result = 0;
	for(uint8_t i = 1; i <= MAX_SQUARE_INDEX; i++){
		result+=square(i);
	}
	return result;
}

