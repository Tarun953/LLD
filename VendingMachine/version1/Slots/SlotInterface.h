#ifndef SLOT_INTERFACE_INCLUDED
#define SLOT_INTERFACE_INCLUDED

class SlotInterface
{
private:
public:
    SlotInterface() = default;
    virtual ~SlotInterface() = default;

    virtual double calcCost() = 0;
};

#endif