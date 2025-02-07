#ifndef TIC_TAC_TOE_INCLUDED
#define TIC_TAC_TOE_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\TicTacToe\Player\Player.h>
#include <C:\Users\HalfVampire\Documents\LLD\TicTacToe\Board\Board.h>
#include <C:\Users\HalfVampire\Documents\LLD\TicTacToe\Piece\OPiece.h>
#include <C:\Users\HalfVampire\Documents\LLD\TicTacToe\Piece\XPiece.h>
#include <C:\Users\HalfVampire\Documents\LLD\TicTacToe\Piece\PlayingPieceType.h>
#include <vector>
#include <deque>
#include <set>
#include <string>
#include <iostream>

class TicTacToeGame
{
private:
    Board board_;
    std::deque<Player> players_;

public:
    TicTacToeGame()
    {
        initialiseGame();
    }
    ~TicTacToeGame() = default;

    void initialiseGame()
    {
        players_.push_back(Player("Player1", new XPiece(PlayingPieceType::X)));
        players_.push_back(Player("Player2", new OPiece(PlayingPieceType::O)));
        board_ = Board(3);
    }

    void playGame()
    {
        bool _playerWon = false;
        bool _hasContinued = false;
        std::set<std::pair<int, int>> _freeSpaces;

        while (!_playerWon)
        {
            Player _player = players_.front();

            // Take out the current freeSpaces present on the board
            if (!_hasContinued)
                _freeSpaces = board_.getFreeSpaces();
            if (_freeSpaces.empty())
            {
                std::cout << "The game is tied!!!\nExiting....!!!";
                break;
            }

            int _x, _y;
            std::cout << "Enter the board row and col number where you want to make your move\n";
            std::cin >> _x >> _y;
            if (_freeSpaces.find(std::make_pair(_x, _y)) == _freeSpaces.end())
            {
                std::cout << "Invalid move by the user please take another move\n";
                _hasContinued = true;
                continue;
            }

            _hasContinued = false;
            board_.addPiece(_x, _y, _player.getPlayingPiece());
            board_.printCurrentBoardStatus();
            players_.pop_front();
            players_.push_back(_player);
            if (board_.checkIfPlayerWon(_player.getPlayingPiece()))
            {
                std::cout << "Player: " << _player.getPlayerName() << " won\n";
                _playerWon = true;
                break;
            }
        }
        return;
    }
};
#endif