#include "chess_piece.h"

chess_piece::chess_piece(bool is_white, int pos_x, int pos_y, char symbol) {
	this->is_white = is_white;
	this->symbol = symbol;
	set_pos_x(pos_x);
	set_pos_y(pos_y);
}
//GETTERS
bool chess_piece::get_in_danger() const {
	return in_danger;
}
bool chess_piece::get_has_moved() const {
	return has_moved;
}
bool chess_piece::get_is_white() const {
	return is_white;

}
int chess_piece::get_pos_x() const {
	return pos_x;
}
int chess_piece::get_pos_y() const {
	return pos_y;
}
char chess_piece::get_symbol() const {
	return symbol;
}

//SETTERS
void chess_piece::set_in_danger(bool in_danger) {
	this -> in_danger = in_danger;
}
void chess_piece::set_pos_x(int& pos_x) {
	this->pos_x = pos_x;
}
void chess_piece::set_pos_y(int& pos_y) {
	this->pos_y = pos_y;
}
void chess_piece::set_has_moved(bool has_moved) {
	this->has_moved = has_moved;
}

bool chess_piece::legal_move(int x, int y, std::vector<chess_piece*>& vector, std::vector<std::vector<char>>& map) const {
	return false;
}