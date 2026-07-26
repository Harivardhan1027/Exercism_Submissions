#include "leap.h"

bool leap_year(int year){
/*	bool is_leap_year = false;

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
*/
	return (((year % 4) == 0) && (((year % 100) != 0) || ((year % 400) == 0)));
}
