#ifndef MOBILE_DISPLAY_INCLUDED
#define MOBILE_DISPLAY_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\WeatherApp\DisplayObserver\Display.h>
#include <C:\Users\HalfVampire\Documents\LLD\WeatherApp\WeatherObservable\Weather.h>
#include <iostream>

class MobileDisplay : public Display
{
private:
    Weather *weather_;
    int currentTemp_;

public:
    MobileDisplay() = default;
    ~MobileDisplay() = default;

    MobileDisplay(Weather *_weather)
    {
        weather_ = _weather;
    }

    void update() override
    {
        currentTemp_ = weather_->getData();
        std::cout << "The new updated temperature in mobile display is: " << currentTemp_ << "\n";
        return;
    }
};
#endif