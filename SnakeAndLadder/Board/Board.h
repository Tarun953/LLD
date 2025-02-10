#ifndef BOARD_INCLUDED
#define BOARD_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\SnakeAndLadder\Obstacle\Obstacle.h>
#include <C:\Users\HalfVampire\Documents\LLD\SnakeAndLadder\Obstacle\ObstacleManager.h>
#include <C:\Users\HalfVampire\Documents\LLD\SnakeAndLadder\Obstacle\ObstacleType.h>
#include <deque>
#include <vector>

class Board
{
private:
    int boardSize_;
    std::vector<std::vector<Obstacle *>> board_;
    ObstacleManager obstacleManager_;

public:
    Board() = default;
    ~Board() = default;

    void initialiseBoard(int _size, int _snakeCount, int _ladderCount)
    {
        boardSize_ = _size;
        board_.resize(_size);
        for (int i = 0; i < _size; i++)
        {
            for (int j = 0; j < _size; j++)
            {
                board_[i].push_back(NULL);
            }
        }

        while (_snakeCount--)
        {
            Obstacle *_newObstacle = obstacleManager_.createRandomObstacle(ObstacleType::SNAKE, boardSize_);
            std::pair<int, int> _position = _newObstacle->getStartEndPos();
            int _rowNum = _position.first % boardSize_;
            int _colNum = boardSize_ - (_position.first % (boardSize_ + 1));
            board_[_rowNum][_colNum] = _newObstacle;
        }

        while (_ladderCount--)
        {
            Obstacle *_newObstacle = obstacleManager_.createRandomObstacle(ObstacleType::LADDER, boardSize_);
            std::pair<int, int> _position = _newObstacle->getStartEndPos();
            int _rowNum = _position.first % boardSize_;
            int _colNum = boardSize_ - (_position.first % (boardSize_ + 1));
            board_[_rowNum][_colNum] = _newObstacle;
        }

        for (int i = 0; i < boardSize_; i++)
        {
            for (int j = 0; j < boardSize_; j++)
            {
                if (board_[i][j] == NULL)
                {
                    int _startPos = i * boardSize_ + j * boardSize_;
                    int _endPos = _startPos + 1;
                    board_[i][j] = obstacleManager_.createObstacle(ObstacleType::FREE, _startPos, _endPos);
                }
            }
        }

        return;
    }

    Obstacle *getObstacleAtPosition(int _row, int _col)
    {
        return board_[_row][_col];
    }
};
#endif