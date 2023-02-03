//
// Created by kilian on 1/22/2023.
//

#ifndef CHESS_KNIGHT_H
#define CHESS_KNIGHT_H
#include "./Piece.h"

namespace jezz {
    class Knight : public Piece {
    public:
        explicit Knight(bool is_white);

        bool valid_move(Pos &from, Pos &to) override;

        Move::move_set calc_possible_moves(const piece_map_t &pieces,const Pos &curr_pos) override;
    };
}

#endif //CHESS_KNIGHT_H
