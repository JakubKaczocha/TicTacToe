#include "tictactoegame.h"
#include <iostream>
#include <limits>

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

   //gameInterface();


}
void TicTacToeGame::gameInterface()
{
    cout << "\t\t           *TIC TAC TOE*\n" << endl;

    cout << "\t\t          1.Player vs AI" << endl;
    cout << "\t\t        2.Player vs Player" << endl;
    cout << "\t\t              3.EXIT" << endl << endl;

    int choose;
    do
    {

        cout << "Choose: ";

        cin >> choose;

        if( cin.fail() )
        {
            cin.clear();
            cin.ignore(std::numeric_limits< std::streamsize >::max(), '\n');
        }




    } while( choose != 1 && choose != 2 && choose != 3 );




}
void TicTacToeGame::gameBoard()
{


    for( int y = 0; y < height_ * 4 - 1; y++ )
    {
        for( int x = 0; x < width_ * 4 - 1; x++ )
        {
            if( ( y % 4 == 0 || y % 4 == 1 || y % 4 == 2 ) && x % 4 == 3)//1, 2 and 3 row // make columns
            {
                putchar('|');
            }
            else if( y % 4 == 1 && x % 4 == 1 ) // fields numbers;
            {
                putchar(fields_[ y / 4 ][ x / 4 ] );
            }
            else if( ( y % 4 == 0 || y % 4 == 1 || y % 4 == 2 ) && x % 4 != 3  ) //1, 2 and 3 row // make space between value
            {                                                                                      // and columns and rowes
                putchar(' ');
            }
            else if( y % 4 == 3 && x % 4 != 3 ) // make rows
            {
                putchar('-');
            }
            else if( y % 4 == 3 && x % 4 == 3 ) //make space between colomns and rows
            {
                putchar(' ');
            }

            if( x == width_ * 4 - 2 ) // end of line;
            {
                putchar('\n');
            }
        }
    }

}

