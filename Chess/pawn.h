#pragma once
#include "chess_piece.h"
class pawn : public chess_piece {
	bool legal_move(int x, int y, std::vector<chess_piece*>& vector) const;
};