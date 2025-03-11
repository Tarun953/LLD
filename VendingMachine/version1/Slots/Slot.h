#ifndef SLOT_INCLUDED
#define SLOT_INCLUDED

#include </home/tarun/LLD/VendingMachine/version1/Slots/SlotInterface.h>
#include <string>
#include <vector>

class Slot : public SlotInterface
{
private:
    std::string slotID_;
    std::string objectName_;
    double cost_;
    // SlotInterface* nextItem_;

public:
    Slot(std::string _slotID, std::string _objectName, double _cost) : slotID_(_slotID), objectName_(_objectName), cost_(_cost) {};
    ~Slot() = default;

    double calcCost() override
    {
        return cost_;
    }

    std::string getObjectName()
    {
        return objectName_;
    }
};

#endif
