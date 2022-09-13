#ifndef TICTACTOEGAME_H
#define TICTACTOEGAME_H


class TicTacToeGame
{
public:
    TicTacToeGame();
    void gameBoard();
    void gameInterface();
private:
    char** fields_;
    int width_, height_;
    char move_ = 'X';
};

#endif // TICTACTOEGAME_H
