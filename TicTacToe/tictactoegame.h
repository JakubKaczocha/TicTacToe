#ifndef TICTACTOEGAME_H
#define TICTACTOEGAME_H


class TicTacToeGame
{
public:
    TicTacToeGame();

private:
    int** fields_;
    const int size_ = 3;
};

#endif // TICTACTOEGAME_H
