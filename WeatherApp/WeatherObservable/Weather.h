#ifndef WEATHER_INCLUDED
#define WEATHER_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\WeatherApp\WeatherObservable\WeatherInterface.h>
#include <C:\Users\HalfVampire\Documents\LLD\WeatherApp\DisplayObserver\Display.h>
#include <vector>
#include <set>

class Weather : public WeatherInterface
{
private:
    int currentTemp_;
    std::set<Display *> weatherObservers_;

public:
    Weather() = default;
    Weather(int _currentTemp) : currentTemp_(_currentTemp)
    {
        weatherObservers_.clear();
    }
    ~Weather() = default;

    void add(Display *_display) override
    {
        weatherObservers_.insert(_display);
    }

    void remove(Display *_display) override
    {
        if (weatherObservers_.find(_display) != weatherObservers_.end())
        {
            weatherObservers_.erase(weatherObservers_.find(_display));
        }
        else
        {
            // We can throw an error that this display is not present
        }
    }

    void notify() override
    {
        for (auto _observer : weatherObservers_)
        {
            _observer->update();
        }
    }

    void setData(int _newTemprature) override
    {
        currentTemp_ = _newTemprature;
        notify();
    }

    int getData() override
    {
        return currentTemp_;
    }
};
#endif