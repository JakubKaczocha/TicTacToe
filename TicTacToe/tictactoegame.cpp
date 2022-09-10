#include "tictactoegame.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

TicTacToeGame::TicTacToeGame() : width_( 3 ), height_( 3 )
{
   fields_ = new char* [ height_ ];
   for( int i = 0; i < height_; i++ )
   {
       fields_[ i ] = new char [ width_];
   }

   char number= '1';
   for( int y = 0; y < height_; y++ )
   {
       for( int x = 0; x < width_; x++ )
       {
           fields_[ y ][ x ] = number++;
       }
   }
}

void TicTacToeGame::gameBoard()
{


    for( int y = 0; y < height_ * 4 - 1; y++ )
    {
        for( int x = 0; x < width_ * 4 - 1; x++ )
        {
            if( ( y % 4 == 0 || y % 4 == 1 || y % 4 == 2 ) && x % 4 == 3)//1, 2 and 3 row
            {
                putchar('|');
            }
            else if( ( y % 4 == 0 || y % 4 == 1 || y % 4 == 2 ) && x % 4 != 3 ) //1, 2 and 3 row
            {
                putchar(' ');
            }
            else if( y % 4 == 3 && x % 4 != 3 )
            {
                putchar('-');
            }
            else if( y % 4 == 3 && x % 4 == 3 )
            {
                putchar(' ');
            }

            if( x == width_ * 4 - 2 )
            {
                putchar('\n');
            }
        }
    }

}

