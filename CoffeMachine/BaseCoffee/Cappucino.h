#ifndef CAPPUCINO_INCLUDED
#define CAPPUCINO_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\CoffeMachine\BaseCoffee\BaseCoffee.h>

class Cappucino : public BaseCoffee
{
private:
    double cost_;

public:
    Cappucino() = default;
    Cappucino(double _cost) : cost_(_cost) {};
    ~Cappucino() = default;

    double calcCost()
    {
        return cost_;
    }

    void setCost(double _cost)
    {
        cost_ = _cost;
        return;
    }
};
#endif