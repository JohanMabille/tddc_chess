// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pawn.hpp"

// In general, ignore this file, but keep it around if you are using pre-compiled headers.

namespace dauphine {

	pawn::pawn(std::size_t row, std::size_t col/*, color c*/)
		: m_row(row),m_col(col)
	{
		aDejaJoue = false;
	}
	bool pawn::can_move(std::size_t row, std::size_t col) const
	{
		if (m_first_move)
		{
			if (row + 2 == m_row && col == m_col)
			{
				piece* p1 = p_engine->get_piece(m_row + 1, col);
				piece* p2 = p_engine->get_piece(m_row + 2, col);
				return (p1 == nullptr) && (p2 == nullptr);
			}
			else if (row == m_row + 1 && col == m_col)
			{
				piece* p1 = p_engine->get_piece(m_row + 1, col);
				return p1 = nullptr;
			}
			if(row == m_row+1 && )
		}
		
		/*if (row < 0 || row > 7 || col < 0 || col > 7)
		{
			std::cout << "la pièce est en dehors du plateau " << std::endl;
		}*/
	}	
}