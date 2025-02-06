#ifndef MOBLE_STOCK_OBSERVER_INCLUDED
#define MOBLE_STOCK_OBSERVER_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\AmazonNotify\stockObservable\StockObservable.h>
#include <C:\Users\HalfVampire\Documents\LLD\AmazonNotify\stockObsever\StockObserver.h>
#include <iostream>

class MobileStockObserver : public StockObserver
{
private:
    int currentStock_;
    StockObservable *stockObservable_;

public:
    MobileStockObserver() = default;
    MobileStockObserver(int _currentStock, StockObservable *_stockObservable) : currentStock_(_currentStock), stockObservable_(_stockObservable) {};
    MobileStockObserver(StockObservable *_stockObservable) : stockObservable_(_stockObservable), currentStock_(0) {};
    ~MobileStockObserver() = default;

    void update() override
    {
        currentStock_ = stockObservable_->getStock();
        std::cout << "Mobile stock got updated to: " << currentStock_ << "\n";
        return;
    }
};
#endif