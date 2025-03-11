#ifndef SLOT_MANAGER_INCLUDED
#define SLOT_MANAGER_INCLUDED

#include </home/tarun/LLD/VendingMachine/version1/Slots/Slot.h>
#include <string>
#include <vector>
#include <map>
#include <set>

class SlotManager
{
private:
    int id_;
    std::map<std::string, int> objectToCntMap_;
    std::map<std::string, Slot> objectToSlotMap_;

public:
    SlotManager() = default;
    ~SlotManager() = default;

    void createSlot()
    {
    }

    std::pair<double, std::string> getCostItems(std::vector<std::string> _objects)
    {
        double totalCost = 0;
        std::string notFound = "";
        for (auto item : _objects)
        {
            if (objectToCntMap_.find(item) != objectToCntMap_.end())
            {
                totalCost += objectToSlotMap_[item].calcCost();
                objectToCntMap_[item]--;
                if (objectToCntMap_[item] == 0)
                    objectToCntMap_.erase(objectToCntMap_.find(item));
            }
            else
            {
                if (notFound != "")
                {
                    notFound += "_";
                    notFound += item;
                }
                else
                {
                    notFound += item;
                }
            }
        }

        return std::make_pair(totalCost, notFound);
    }
};

#endif