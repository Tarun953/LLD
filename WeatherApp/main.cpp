#include <C:\Users\HalfVampire\Documents\LLD\WeatherApp\WeatherObservable\Weather.h>
#include <C:\Users\HalfVampire\Documents\LLD\WeatherApp\DisplayObserver\ComputerDisplay.h>
#include <C:\Users\HalfVampire\Documents\LLD\WeatherApp\DisplayObserver\MobileDisplay.h>
#include <C:\Users\HalfVampire\Documents\LLD\WeatherApp\DisplayObserver\TVDisplay.h>
#include <iostream>

int main()
{
    Weather weather_ = Weather(0);
    std::cout << "Current Temp: " << weather_.getData() << "\n";
    ComputerDisplay computerDisplay_ = ComputerDisplay(&weather_);
    MobileDisplay mobileDisplay_ = MobileDisplay(&weather_);
    TVDisplay tvDisplay_ = TVDisplay(&weather_);

    weather_.add(&computerDisplay_);
    weather_.add(&mobileDisplay_);
    weather_.add(&tvDisplay_);

    weather_.setData(100);
    weather_.remove(&mobileDisplay_);

    weather_.setData(200);
    return 0;
}