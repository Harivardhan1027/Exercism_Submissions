#include "leap.h"

bool leap_year(int year){
	bool is_leap_year = false;
	if(year < 0){
		is_leap_year = false;
	}
	else{
		if(year % 4){
			is_leap_year = false;
		}
		else{
			if(year % 100){
				is_leap_year = true;
			}
			else{
				if(year % 400){
					is_leap_year = false;
				}
				else{
					is_leap_year = true;
				}
			}
		}
	}
	return is_leap_year;
}
