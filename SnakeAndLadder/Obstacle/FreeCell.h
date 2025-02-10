#ifndef FREE_CELL_INCLUDED
#define FREE_CELL_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\SnakeAndLadder\Obstacle\Obstacle.h>

class FreeCell : public Obstacle
{
public:
    FreeCell() = default;
    FreeCell(int _startPos, int _endPos)
    {
        startPos_ = _startPos;
        endPos_ = _endPos;
    }
    ~FreeCell() = default;

    std::pair<int, int> getStartEndPos()
    {
        return std::make_pair(startPos_, endPos_);
    }
};
#endif