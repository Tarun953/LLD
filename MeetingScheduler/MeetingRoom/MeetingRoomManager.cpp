#ifndef MEETING_ROOM_MANAGER_INCLUDED
#define MEETING_ROOM_MANAGER_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\MeetingScheduler\MeetingRoom\MeetingRoom.cpp>
#include <C:\Users\HalfVampire\Documents\LLD\MeetingScheduler\MeetingRoom\Calendar.h>
#include <vector>
#include <map>

class MeetingRoomManager
{
private:
    std::vector<MeetingRoom> meetingRooms_;
    std::map<MeetingRoom, Calendar> roomCalendarMap_;

public:
    MeetingRoomManager() = default;
    ~MeetingRoomManager() = default;

    void createMeetingRoom(int _mID, int _capacity, std::string _location)
    {
        MeetingRoom _newRoom = MeetingRoom(_mID, _capacity, _location);
        meetingRooms_.push_back(_newRoom);
        roomCalendarMap_[_newRoom] = Calendar();
    }

    void updateMeetingRoom()
    {
    }

    void deleteMeetingRoom()
    {
    }

    MeetingRoom getMeetingRoom(int _capacity, std::string _startTime, std::string _endTime)
    {
        for (auto _mRoom : meetingRooms_)
        {
            if ((_mRoom.getCapacity() >= _capacity) && roomCalendarMap_[_mRoom].checkAvailability(_startTime, _endTime))
            {
                return _mRoom;
            }
        }
    }
};
#endif