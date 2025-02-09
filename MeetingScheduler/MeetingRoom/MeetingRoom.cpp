#ifndef MEETING_ROOM_INCLUDED
#define MEETING_ROOM_INCLUDED

#include <string>

class MeetingRoom
{
private:
    int mID_;
    int capacity_;
    std::string location_;

public:
    MeetingRoom() = default;
    MeetingRoom(int _mID, int _capacity, std::string _location) : mID_(_mID), capacity_(_capacity), location_(_location) {};
    ~MeetingRoom() = default;

    int getCapacity()
    {
        return capacity_;
    }
};
#endif