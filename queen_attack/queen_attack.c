#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    if(queen_1.row > 7 || queen_1.column > 7 || queen_2.row > 7 || queen_2.column > 7) {
        return INVALID_POSITION;
    }

    uint8_t diff_row;
    if(queen_1.row >= queen_2.row) {
        diff_row = queen_1.row - queen_2.row;
    } else {
        diff_row = queen_2.row - queen_1.row;        
    }
    
    uint8_t diff_col;
    if(queen_1.column >= queen_2.column) {
        diff_col = queen_1.column - queen_2.column;
    } else {
        diff_col = queen_2.column - queen_1.column;        
    }

    if(diff_row + diff_col == 0) {
        return INVALID_POSITION;
    }
    
    if (diff_row * diff_col == 0 || diff_col == diff_row) {
        return CAN_ATTACK;
    }

    return CAN_NOT_ATTACK;
}