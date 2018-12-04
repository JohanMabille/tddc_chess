#include "Piece.hpp"
#include <cstddef>

namespace dauphine {
	void piece::set_position(std::size_t row, std::size_t col) {
		m_row = row;
		m_col = col;

	}
	piece::~piece() {

	}
	piece::piece(std::size_t row, std::size_t col, color c) 
	{
	}

}	
//std::vector<std::vector<piece*>>m_p_list;
//bool authorized = m_p_list[i][j]->can move(new i, new j);