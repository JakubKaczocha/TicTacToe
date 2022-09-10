#ifndef TICTACTOEGAME_H
#define TICTACTOEGAME_H


class TicTacToeGame
{
public:
    TicTacToeGame();
    void gameBoard();

private:
    char** fields_;
    const int width_, height_;
    char move_ = 'X';
};

#endif // TICTACTOEGAME_H
