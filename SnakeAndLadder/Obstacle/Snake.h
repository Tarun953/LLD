#ifndef SNAKE_INCLUDED
#define SNAKE_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\SnakeAndLadder\Obstacle\Obstacle.h>

class Snake : public Obstacle
{
private:
public:
    Snake() = default;
    Snake(int _startPos, int _endPos)
    {
        startPos_ = _startPos;
        endPos_ = _endPos;
    }
    ~Snake() = default;

    std::pair<int, int> getStartEndPos() override
    {
        return std::make_pair(startPos_, endPos_);
    }
};
#endif