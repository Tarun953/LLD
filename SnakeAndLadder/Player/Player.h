#ifndef PLAYER_INCLUDED
#define PLAYER_INCLUDED

#include <iostream>
#include <string>

class Player
{
private:
    int playerID_;
    std::string name_;
    int currentPos_;

public:
    Player() = default;
    Player(int _playerID, std::string _name) : playerID_(_playerID), name_(_name), currentPos_(0) {};
    ~Player() = default;

    int getPlayerCurrentPos()
    {
        return currentPos_;
    }
};
#endif