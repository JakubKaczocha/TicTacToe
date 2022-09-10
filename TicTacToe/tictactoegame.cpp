#include "tictactoegame.h"

TicTacToeGame::TicTacToeGame()
{
   fields_ = new int* [ size_ ];
   for( int i = 0; i < size_; i++ )
   {
       fields_[ i ] = new int [ size_];
   }
}
