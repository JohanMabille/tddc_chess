//
//  pawn.hpp
//  
//
//  Created by David Tiobang on 04/12/2018.
//

#ifndef pawn_hpp
#define pawn_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <cstddef>

namespace dauphine
{
    class pawn /*: public piece */
    {
        
    public:
        
        pawn(std::size_t m_row,std::size_t m_col/*, color c */);
        virtual ~pawn();
        
        bool can_move(std::size_t row,std::size_t col) const override;
       
	private:
		bool aDejaJoue;
	};
    
    





}
#endif /* pawn_hpp */
