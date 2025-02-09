#include <string>
#include <set>

class Calendar
{
private:
    std::set<std::pair<std::string, std::string>> meetingTimings_;

public:
    Calendar() = default;
    ~Calendar() = default;

    bool checkAvailability(std::string _startTime, std::string _endTime)
    {
        for (auto _timing : meetingTimings_)
        {
            if (((_startTime >= _timing.first) && (_startTime <= _timing.second)) || ((_endTime >= _timing.first) && (_endTime <= _timing.second)))
            {
                return false;
            }
            return true;
        }
    }
};