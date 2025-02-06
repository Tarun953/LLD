#ifndef MOBILE_STOCK_INCLUDED
#define MOBILE_STOCK_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\AmazonNotify\stockObservable\StockObservable.h>
#include <C:\Users\HalfVampire\Documents\LLD\AmazonNotify\stockObsever\StockObserver.h>
#include <set>

class MobileStock : public StockObservable
{
private:
    int currentStock_;
    std::set<StockObserver *> mobileStockObservers_;

public:
    MobileStock() = default;
    MobileStock(int _currentStock) : currentStock_(_currentStock)
    {
        mobileStockObservers_.clear();
    }
    ~MobileStock() = default;

    void addObserver(StockObserver *_stockObserver) override
    {
        mobileStockObservers_.insert(_stockObserver);
        return;
    }

    void removeObserver(StockObserver *_stockObserver) override
    {
        if (mobileStockObservers_.find(_stockObserver) != mobileStockObservers_.end())
        {
            mobileStockObservers_.erase(mobileStockObservers_.find(_stockObserver));
        }
        else
        {
            // We throw an error that there is no such observer present for this
        }
        return;
    }

    void notify() override
    {
        for (auto _mobileObserver : mobileStockObservers_)
        {
            _mobileObserver->update();
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