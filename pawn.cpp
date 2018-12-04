// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pawn.hpp"

// In general, ignore this file, but keep it around if you are using pre-compiled headers.

namespace dauphine {

	pawn::pawn(std::size_t row, std::size_t col/*, color c*/)
		: m_row(row),m_col(col)
	{
		aDejaJoue = false;
	}
	bool can_move(std::size_t row, std::size_t col)
	{

	}	
}