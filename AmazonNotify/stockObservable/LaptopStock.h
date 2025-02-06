#ifndef LAPTOP_STOCK_INCLUDED
#define LAPTOP_STOCK_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\AmazonNotify\stockObservable\StockObservable.h>
#include <C:\Users\HalfVampire\Documents\LLD\AmazonNotify\stockObsever\StockObserver.h>
#include <set>

class LaptopStock : public StockObservable
{
private:
    int currentStock_;
    std::set<StockObserver *> laptopStockObservers_;

public:
    LaptopStock() = default;
    LaptopStock(int _currentStock) : currentStock_(_currentStock)
    {
        laptopStockObservers_.clear();
    }
    ~LaptopStock() = default;

    void addObserver(StockObserver *_stockObserver) override
    {
        laptopStockObservers_.insert(_stockObserver);
        return;
    }

    void removeObserver(StockObserver *_stockObserver) override
    {
        if (laptopStockObservers_.find(_stockObserver) != laptopStockObservers_.end())
        {
            laptopStockObservers_.erase(laptopStockObservers_.find(_stockObserver));
        }
        else
        {
            // We throw an error that there is no such observer present for this
        }
        return;
    }

    void notify() override
    {
        for (auto _laptopObserver : laptopStockObservers_)
        {
            _laptopObserver->update();
        }
        return;
    }

    void updateStock(int _newStock) override
    {
        int _prevStock = currentStock_;
        currentStock_ = _newStock;
        if (_prevStock == 0)
        {
            notify();
        }
        return;
    }

    int getStock() override
    {
        return currentStock_;
    }
};
#endif