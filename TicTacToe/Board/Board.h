#ifndef BOARD_INCLUDED
#define BOARD_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\TicTacToe\Piece\PlayingPiece.h>
#include <vector>
#include <iostream>
#include <set>

class Board
{
private:
    int sz_;
    std::vector<std::vector<PlayingPiece *>> board_;

public:
    Board()
    {
        board_.clear();
    }
    Board(int _sz) : sz_(_sz)
    {
        board_.clear();
        board_.resize(sz_);
        for (int i = 0; i < sz_; i++)
        {
            for (int j = 0; j < sz_; j++)
            {
                board_[i].push_back(nullptr);
            }
        }
    }
    ~Board() = default;

    bool isValidPlace(int x, int y)
    {
        if (x >= 0 && x < sz_ && y >= 0 && y < sz_)
        {
            return true;
        }
        return false;
    }

    std::set<std::pair<int, int>> getFreeSpaces()
    {
        std::set<std::pair<int, int>> _freeSpaces;
        for (int i = 0; i < sz_; i++)
        {
            for (int j = 0; j < sz_; j++)
            {
                if (board_[i][j] == nullptr)
                    _freeSpaces.insert(std::make_pair(i, j));
            }
        }
        return _freeSpaces;
    }

    bool addPiece(int row, int col, PlayingPiece *_playingPiece)
    {
        if (isValidPlace(row, col) && board_[row][col] == nullptr)
        {
            board_[row][col] = _playingPiece;
            return true;
        }
        else
        {
            return false;
        }
    }

    void printCurrentBoardStatus()
    {
        for (auto it : board_)
        {
            for (auto st : it)
            {
                if (st == nullptr)
                {
                    std::cout << "\t";
                }
                else
                {
                    std::cout << st->playingPieceType_ << "\t";
                }
            }
            std::cout << "\n";
        }
        std::cout << "----------------------------------\n";
        return;
    }

    bool checkIfPlayerWon(PlayingPiece *_playingPiece)
    {
        // Check Rows
        for (int i = 0; i < sz_; i++)
        {
            bool won = true;
            for (int j = 0; j < sz_; j++)
            {
                if (board_[i][j] == nullptr || board_[i][j] != _playingPiece)
                {
                    won = false;
                    break;
                }
            }
            if (won)
                return true;
        }

        // Check Columns
        for (int i = 0; i < sz_; i++)
        {
            bool won = true;
            for (int j = 0; j < sz_; j++)
            {
                if (board_[j][i] == nullptr || board_[j][i] != _playingPiece)
                {
                    won = false;
                    break;
                }
            }
            if (won)
                return true;
        }

        // Check both diagonals
        bool won = true;
        for (int i = 0; i < sz_; i++)
        {
            if (board_[i][i] == nullptr || board_[i][i] != _playingPiece)
            {
                won = false;
                break;
            }
        }
        if (won)
            return true;

        won = true;
        for (int i = 0; i < sz_; i++)
        {
            if (board_[sz_ - i - 1][sz_ - i - 1] == nullptr || board_[sz_ - i - 1][sz_ - i - 1] != _playingPiece)
            {
                won = false;
                break;
            }
        }
        if (won)
            return true;

        return false;
    }
};
#endif