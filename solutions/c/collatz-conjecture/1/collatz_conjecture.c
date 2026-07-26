#include "collatz_conjecture.h"

int steps(int start){
	int count = 0;
	if(start < 1){
		count = -1;
	}
	else{
		while(1 != start){
			if(start & 1){
				count++;
				start = 3*start+1;
			}
			else{
				count++;
				start >>= 1;
			}
		}
	}
	return count;
}

