#include "tictactoegame.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

TicTacToeGame::TicTacToeGame()
{
   fields_ = new char* [ size_ ];
   for( int i = 0; i < size_; i++ )
   {
       fields_[ i ] = new char [ size_];
   }

   char field = '1';
   for( int i = 0; i < size_; i++ )
   {
       for( int j = 0; j < size_; j++ )
       {
           fields_[ i ][ j ] = field++;
       }
   }
}

void TicTacToeGame::gameBoard()
{
    cout << "   |   |   \n";
    cout << " " << fields_[ 0 ][ 0 ] << " | " << fields_[ 0 ][ 1 ] << " | " << fields_[ 0 ][ 2 ] << " \n";
    cout << "   |   |   \n";
    cout << "--- --- ---\n";
    cout << "   |   |   \n";
    cout << " " << fields_[ 1 ][ 0 ] << " | " << fields_[ 1 ][ 1 ] << " | " << fields_[ 1 ][ 2 ] << " \n";
    cout << "   |   |   \n";
    cout << "--- --- ---\n";
    cout << "   |   |   \n";
    cout << " " << fields_[ 2 ][ 0 ] << " | " << fields_[ 2 ][ 1 ] << " | " << fields_[ 2 ][ 2 ] << " \n";
    cout << "   |   |   \n";
}
