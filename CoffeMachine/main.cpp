#include <C:\Users\HalfVampire\Documents\LLD\CoffeMachine\BaseCoffee\BaseCoffee.h>
#include <C:\Users\HalfVampire\Documents\LLD\CoffeMachine\BaseCoffee\Cappucino.h>
#include <C:\Users\HalfVampire\Documents\LLD\CoffeMachine\BaseCoffee\Expresso.h>
#include <C:\Users\HalfVampire\Documents\LLD\CoffeMachine\Toppings\Chocolate.h>
#include <C:\Users\HalfVampire\Documents\LLD\CoffeMachine\Toppings\Cream.h>
#include <C:\Users\HalfVampire\Documents\LLD\CoffeMachine\Toppings\Sugar.h>
#include <iostream>

int main()
{
    // We want to make an Expresso with Milk, sugar and Chocolate
    // std::cout << dynamic_cast<BaseCoffee *>(new Expresso(120))->calcCost();

    std::cout << "Cost of an expresso with sugar, milk and chocolate is: " << Chocolate(100.5, new Sugar(20.6, new Cream(50, new Expresso(120)))).calcCost() << "\n";

    return 0;
}