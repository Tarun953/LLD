#ifndef SUGAR_INCLUDED
#define SUGAR_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\CoffeMachine\Toppings\Toppings.h>
#include <C:\Users\HalfVampire\Documents\LLD\CoffeMachine\BaseCoffee\BaseCoffee.h>
#include <iostream>

class Sugar : public Toppings
{
private:
    double cost_;
    BaseCoffee *baseCoffee_;

public:
    Sugar() = default;
    Sugar(double _cost, BaseCoffee *_baseCoffee) : cost_(_cost), baseCoffee_(_baseCoffee) {};
    Sugar(BaseCoffee *_baseCoffee) : baseCoffee_(_baseCoffee), cost_(0) {};
    ~Sugar() = default;

    double calcCost() override
    {
        return baseCoffee_->calcCost() + cost_;
    }

    void setCost(double _cost)
    {
        cost_ = _cost;
        return;
    }
};
#endif