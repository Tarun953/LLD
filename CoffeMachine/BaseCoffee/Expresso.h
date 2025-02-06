#ifndef EXPRESSO_INCLUDED
#define EXPRESSO_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\CoffeMachine\BaseCoffee\BaseCoffee.h>

class Expresso : public BaseCoffee
{
private:
    double cost_;

public:
    Expresso() = default;
    Expresso(double _cost) : cost_(_cost) {};
    ~Expresso() = default;

    double calcCost() override
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