#ifndef OBSTACLE_INCLUDED
#define OBSTACLE_INCLUDED
#include <iostream>

class Obstacle
{
public:
    Obstacle() = default;
    virtual ~Obstacle() = default;

    int startPos_;
    int endPos_;

    virtual std::pair<int, int> getStartEndPos() = 0;
};
#endif