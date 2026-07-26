#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2){
	attack_status_t attack_sts_ret = INVALID_POSITION;

	uint8_t max_pos_cal = queen_1.row | queen_1.column | queen_2.row | queen_2.column;

	uint8_t rel_row_pos = (queen_1.row > queen_2.row) ? (queen_1.row - queen_2.row) : (queen_2.row - queen_1.row);

	uint8_t rel_col_pos = (queen_1.column > queen_2.column) ? (queen_1.column - queen_2.column) : (queen_2.column - queen_1.column);


	if((max_pos_cal > 7) || ((rel_row_pos == 0) && (rel_col_pos == 0))){
		attack_sts_ret = INVALID_POSITION;
	}
	else if((rel_row_pos == 0) || (rel_col_pos == 0) || (rel_row_pos == rel_col_pos)){
		attack_sts_ret = CAN_ATTACK;
	}
	else{
		attack_sts_ret = CAN_NOT_ATTACK;
	}

	return attack_sts_ret;
}

