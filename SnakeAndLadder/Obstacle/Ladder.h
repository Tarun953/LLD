#ifndef LADDER_INCLUDED
#define LADDER_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\SnakeAndLadder\Obstacle\Obstacle.h>

class Ladder : public Obstacle
{
private:
public:
    Ladder() = default;
    Ladder(int _startPos, int _endPos)
    {
        startPos_ = _startPos;
        endPos_ = _endPos;
    }
    ~Ladder() = default;

    std::pair<int, int> getStartEndPos() override
    {
        return std::make_pair(startPos_, endPos_);
    }
};
#endif