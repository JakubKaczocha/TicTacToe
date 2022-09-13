#include "tictactoegame.h"
#include <iostream>
#include <limits>
#include <windows.h>

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


    int choose;
    do
    {
        cout << "\t\t           *TIC TAC TOE*\n" << endl;

        cout << "\t\t          1.Player vs AI" << endl;
        cout << "\t\t        2.Player vs Player" << endl;
        cout << "\t\t              3.EXIT" << endl << endl;
        cout << "Choose: ";

        cin >> choose;

        if( cin.fail() )
        {
            cin.clear();
            cin.ignore(std::numeric_limits< std::streamsize >::max(), '\n');
        }
        system("CLS");
    } while( choose != 1 && choose != 2 && choose != 3 );

    switch ( choose )
    {
    case 1:

        playerVsAI();
        break;
    case 2:

        playerVsPlayer();
    case 3:

        cout << "thanks for playing :)\n";
        return;
    }


}

void TicTacToeGame::playerVsPlayer()
{
    int turns = width_ * height_;
    for( int i = 0; i < turns; i++ )
    {
        gameBoard();
        selectField();
        system("CLS");
    }
    gameBoard();
}
void TicTacToeGame::playerVsAI()
{
    cout << "player vs AI\n\n";
}
void TicTacToeGame::selectField()
{
    char choose;

    do
    {
        cout << move_ << " turn, select the field: ";
        cin >> choose;
        if( cin.fail() )
        {
            cin.clear();
            cin.ignore( std::numeric_limits< std::streamsize >::max() );
        }

    }while( !isFree( choose ) );

    if( move_ == 'X' )
    {
        move_ = 'O';
    }
    else if( move_ == 'O')
    {
        move_ = 'X';
    }
    else
    {
        cout << "invorrect value of variable move_ ";
    }
}

bool TicTacToeGame::isFree( char choose )
{
    if ( choose == 'X' || choose == 'O' )
    {
        return 0;
    }

    for( int i = 0; i < height_; i++ )
    {
        for( int j = 0; j < width_; j++ )
        {
            if( fields_[ i ][ j ] == choose )
            {
                fields_[ i ][ j ] = move_;
                return 1;
            }
        }
    }


    return 0;
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

