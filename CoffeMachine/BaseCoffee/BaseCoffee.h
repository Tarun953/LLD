#ifndef BASE_COFFEE_INCLUDED
#define BASE_COFFEE_INCLUDED

class BaseCoffee
{
private:
public:
    BaseCoffee() = default;
    virtual ~BaseCoffee() = default;

    virtual double calcCost() = 0;
};
#endif