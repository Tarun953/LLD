#ifndef CREAM_INCLUDED
#define CREAM_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\CoffeMachine\Toppings\Toppings.h>
#include <C:\Users\HalfVampire\Documents\LLD\CoffeMachine\BaseCoffee\BaseCoffee.h>
#include <iostream>

class Cream : public Toppings
{
private:
    double cost_;
    BaseCoffee *baseCoffee_;

public:
    Cream() = default;
    Cream(double _cost, BaseCoffee *_baseCoffee) : cost_(_cost), baseCoffee_(_baseCoffee) {};
    Cream(BaseCoffee *_baseCoffee) : baseCoffee_(_baseCoffee), cost_(0) {};
    ~Cream() = default;

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