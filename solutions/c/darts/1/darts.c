#include "darts.h"

uint8_t score(coordinate_t land_coordinate){
	float radius_sqrd = (land_coordinate.pos_x * land_coordinate.pos_x) + (land_coordinate.pos_y * land_coordinate.pos_y);

	uint8_t ret_score = 0;
	if(radius_sqrd <= 100.0f){
		ret_score = 1;
		if(radius_sqrd <= 25.0f){
			ret_score = 5;
			if(radius_sqrd <= 1.0f){
				ret_score = 10;
			}
		}
	}

	return ret_score;
}
