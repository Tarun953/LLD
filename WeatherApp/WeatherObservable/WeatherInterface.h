#ifndef WEATHER_INTERFACE_INCLUDED
#define WEATHER_INTERFACE_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\WeatherApp\DisplayObserver\Display.h>

class WeatherInterface
{
private:
public:
    WeatherInterface() = default;
    virtual ~WeatherInterface() = default;

    virtual void add(Display *_display) = 0;
    virtual void remove(Display *_display) = 0;
    virtual void notify() = 0;
    virtual void setData(int _newTemperature) = 0;
    virtual int getData() = 0;
};
#endif