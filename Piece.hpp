#ifndef PIECE_HPP
#define PIECE_HPP



#include <iostream>
#include <sstream>
#include <string>

namespace dauphine {
	enum class color {
		white,
		black
	};
	class piece {
		public:
			virtual ~piece();
			piece(const piece&) = delete;
			piece& operator=(const piece&) = delete;
			piece(piece&&) = delete;
			piece& operator =(piece&&) = delete;

			void set_position(std::size_t row,std::size_t col);
			virtual bool can_move( std::size_t row, std::size_t col) const = 0;
		protected:
			piece(std::size_t row, std::size_t col, color c);
			color m_color;
			std::size_t m_row;
			std::size_t m_col;
	};

}

#endif