#ifndef STOCK_OBSERVER_INCLUDED
#define STOCK_OBSERVER_INCLUDED

class StockObserver
{
private:
public:
    StockObserver() = default;
    virtual ~StockObserver() = default;

    virtual void update() = 0;
};
#endif