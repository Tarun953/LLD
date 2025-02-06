#ifndef STOCK_OBSERVABLE_INCLUDED
#define STOCK_OBSERVABLE_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\AmazonNotify\stockObsever\StockObserver.h>

class StockObservable
{
private:
public:
    StockObservable() = default;
    virtual ~StockObservable() = default;

    virtual void addObserver(StockObserver *_stockObserver) = 0;
    virtual void removeObserver(StockObserver *_stockObserver) = 0;
    virtual void notify() = 0;
    virtual void updateStock(int _newStock) = 0;
    virtual int getStock() = 0;
};
#endif