#ifndef LAPTOP_STOCK_OBSERVER_INCLUDED
#define LAPTOP_STOCK_OBSERVER_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\AmazonNotify\stockObservable\StockObservable.h>
#include <C:\Users\HalfVampire\Documents\LLD\AmazonNotify\stockObsever\StockObserver.h>
#include <iostream>

class LaptopStockObserver : public StockObserver
{
private:
    int currentStock_;
    StockObservable *stockObservable_;

public:
    LaptopStockObserver() = default;
    LaptopStockObserver(int _currentStock, StockObservable *_stockObservable) : currentStock_(_currentStock), stockObservable_(_stockObservable) {};
    LaptopStockObserver(StockObservable *_stockObservable) : stockObservable_(_stockObservable), currentStock_(0) {};
    ~LaptopStockObserver() = default;

    void update() override
    {
        currentStock_ = stockObservable_->getStock();
        std::cout << "Laptop stock got updated to: " << currentStock_ << "\n";
        return;
    }
};
#endif