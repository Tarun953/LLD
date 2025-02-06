#ifndef TV_DISPLAY_INCLUDED
#define TV_DISPLAY_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\WeatherApp\DisplayObserver\Display.h>
#include <C:\Users\HalfVampire\Documents\LLD\WeatherApp\WeatherObservable\Weather.h>
#include <iostream>

class TVDisplay : public Display
{
private:
    Weather *weather_;
    int currentTemp_;

public:
    TVDisplay() = default;
    ~TVDisplay() = default;

    TVDisplay(Weather *_weather)
    {
        weather_ = _weather;
    }

    void update() override
    {
        currentTemp_ = weather_->getData();
        std::cout << "The new updated temperature in TV display is: " << currentTemp_ << "\n";
        return;
    }
};
#endif