#ifndef DISPLAY_BOARD_INCLUDED
#define DISPLAY_BOARD_INCLUDED

#include <map>

// We have to declare the display board as singelton class
class DisplayBoard
{
private:
    static DisplayBoard *displayBoard_;
    std::map<int, int> freeSpots_;
    DisplayBoard() = default;
    DisplayBoard(std::map<int, int> _freeSpots)
    {
        this->freeSpots_ = _freeSpots;
    }

public:
    // Deleting the DisplayBoard copy constructor to avoid copying of instances
    DisplayBoard(DisplayBoard &obj) = delete;

    static DisplayBoard *getInstance()
    {
        if (displayBoard_ == nullptr)
        {
            displayBoard_ = new DisplayBoard();
            displayBoard_->freeSpots_.clear();
            return displayBoard_;
        }
        else
        {
            return displayBoard_;
        }
    }
};
#endif