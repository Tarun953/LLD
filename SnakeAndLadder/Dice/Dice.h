#ifndef DICE_INCLUDED
#define DICE_INCLUDED

#include <iostream>
#include <stdlib.h>

class Dice
{
private:
    int numFaces_;

public:
    Dice() = default;
    Dice(int _numFaces) : numFaces_(_numFaces) {};
    ~Dice() = default;

    int rollDice()
    {
        return numFaces_ - (rand() % numFaces_);
    }
};
#endif