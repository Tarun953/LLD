#ifndef TOPPINGS_INCLUDED
#define TOPPINGS_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\CoffeMachine\BaseCoffee\BaseCoffee.h>
#include <iostream>

// This is also an abstract class
class Toppings : public BaseCoffee
{
private:
public:
    Toppings() = default;
    virtual ~Toppings() = default;
};
#endif