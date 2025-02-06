#ifndef DISPLAY_INCLUDED
#define DISPLAY_INCLUDED

// This is the observerInterface which will be observing the WeatherObservable
class Display
{
private:
public:
    Display() = default;
    virtual ~Display() = default;

    virtual void update() = 0;
};
#endif