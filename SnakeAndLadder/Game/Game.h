#ifndef GAME_INCLUDED
#define GAME_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\SnakeAndLadder\Board\Board.h>
#include <C:\Users\HalfVampire\Documents\LLD\SnakeAndLadder\Player\Player.h>
#include <C:\Users\HalfVampire\Documents\LLD\SnakeAndLadder\Dice\Dice.h>
#include <vector>
#include <deque>

class Game
{
private:
    int numPlayers_;
    Board board_;
    std::deque<Player> players_;
    Dice dice_;

public:
    ~Game() = default;

    Game(int _numPlayers, int _boardSize, int _diceFaces, int _snakeCount, int _ladderCount)
    {
        numPlayers_ = _numPlayers;
        initialiseGame(_boardSize, _diceFaces, _snakeCount, _ladderCount);
    }

    void initialiseGame(int _boardSize, int _diceFaces, int _snakeCount, int _ladderCount)
    {
        dice_ = Dice(_diceFaces);
        board_.initialiseBoard(_boardSize, _snakeCount, _ladderCount);
        for (int i = 0; i < numPlayers_; i++)
        {
            players_.push_back(Player(i, std::to_string(i)));
        }
    }

    void playGame()
    {
        // Write the game logic here
    }
};
#endif
