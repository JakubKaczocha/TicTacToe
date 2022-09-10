#ifndef TICTACTOEGAME_H
#define TICTACTOEGAME_H


class TicTacToeGame
{
public:
    TicTacToeGame();
    void gameBoard();

private:
    char** fields_;
    const int size_ = 3;
};

#endif // TICTACTOEGAME_H
