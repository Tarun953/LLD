#include <C:\Users\HalfVampire\Documents\LLD\AmazonNotify\stockObservable\LaptopStock.h>
#include <C:\Users\HalfVampire\Documents\LLD\AmazonNotify\stockObservable\MobileStock.h>
#include <C:\Users\HalfVampire\Documents\LLD\AmazonNotify\stockObsever\LaptopStockObserver.h>
#include <C:\Users\HalfVampire\Documents\LLD\AmazonNotify\stockObsever\MobileStockObserver.h>
#include <iostream>

int main()
{
    LaptopStock laptopStock_ = LaptopStock();
    MobileStock mobileStock_ = MobileStock();

    LaptopStockObserver laptopStockObserver1_ = LaptopStockObserver(&laptopStock_);
    LaptopStockObserver laptopStockObserver2_ = LaptopStockObserver(&laptopStock_);

    MobileStockObserver mobileStockObserver1_ = MobileStockObserver(&mobileStock_);
    MobileStockObserver mobileStockObserver2_ = MobileStockObserver(&mobileStock_);

    laptopStock_.addObserver(&laptopStockObserver1_);
    laptopStock_.addObserver(&laptopStockObserver2_);

    mobileStock_.addObserver(&mobileStockObserver1_);
    mobileStock_.addObserver(&mobileStockObserver2_);

    laptopStock_.updateStock(102);
    mobileStock_.updateStock(120);

    mobileStock_.removeObserver(&mobileStockObserver1_);
    laptopStock_.removeObserver(&laptopStockObserver2_);

    laptopStock_.updateStock(0);
    mobileStock_.updateStock(0);

    laptopStock_.updateStock(20);
    mobileStock_.updateStock(30);

    return 0;
}