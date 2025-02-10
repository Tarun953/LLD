#ifndef OBSTACLE_MANAGER_INCLUDED
#define OBSTACLE_MANAGER_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\SnakeAndLadder\Obstacle\Obstacle.h>
#include <C:\Users\HalfVampire\Documents\LLD\SnakeAndLadder\Obstacle\ObstacleType.h>
#include <C:\Users\HalfVampire\Documents\LLD\SnakeAndLadder\Obstacle\Snake.h>
#include <C:\Users\HalfVampire\Documents\LLD\SnakeAndLadder\Obstacle\Ladder.h>
#include <C:\Users\HalfVampire\Documents\LLD\SnakeAndLadder\Obstacle\FreeCell.h>
#include <stdlib.h>

class ObstacleManager
{
private:
public:
    ObstacleManager() = default;
    ~ObstacleManager() = default;

    Obstacle *createObstacle(ObstacleType _obstacleType, int _startPos, int _endPos)
    {
        switch (_obstacleType)
        {
        case ObstacleType::SNAKE:
            return new Snake(_startPos, _endPos);
        case ObstacleType::LADDER:
            return new Ladder(_startPos, _endPos);
        case ObstacleType::FREE:
            return new FreeCell(_startPos, _startPos + 1);
        default:
            NULL;
        }
        return NULL;
    }

    Obstacle *createRandomObstacle(ObstacleType _obstacleType, int _size)
    {
        int _totalBlocks = _size * _size;
        switch (_obstacleType)
        {
        case ObstacleType::SNAKE:
            return new Snake((rand() % _totalBlocks), (rand() % _totalBlocks));
        case ObstacleType::LADDER:
            return new Ladder((rand() % _totalBlocks), (rand() % _totalBlocks));
        default:
            NULL;
        }
        return NULL;
    }
};
#endif