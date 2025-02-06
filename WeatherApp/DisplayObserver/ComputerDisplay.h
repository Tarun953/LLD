#ifndef COMPUTER_DISPLAY_INCLUDED
#define COMPUTER_DISPLAY_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\WeatherApp\DisplayObserver\Display.h>
#include <C:\Users\HalfVampire\Documents\LLD\WeatherApp\WeatherObservable\Weather.h>
#include <iostream>

class ComputerDisplay : public Display
{
private:
    Weather *weather_;
    int currentTemp_;

public:
    ComputerDisplay() = default;
    ~ComputerDisplay() = default;

    ComputerDisplay(Weather *_weather)
    {
        weather_ = _weather;
    }

    void update() override
    {
        currentTemp_ = weather_->getData();
        std::cout << "The new updated temperature in computer display is: " << currentTemp_ << "\n";
        return;
    }
};
#endif