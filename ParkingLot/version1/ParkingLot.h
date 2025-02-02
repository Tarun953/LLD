#include <vector>
#include <map>
#include <string>

class ParkingLot
{
private:
    int levels_;
    int totalAvailableCount_;
    std::vector<int> capacity_;
    std::vector<std::vector<int>> parkingLot_;
    std::map<int, int> levelToFillMap_;
    std::map<std::string, std::pair<int, int>> vehicleToParkMap_;

public:
    ParkingLot(int _levels, std::vector<int> _capacity) : levels_(_levels), capacity_(_capacity), totalAvailableCount_(0)
    {
        levelToFillMap_.clear();
        vehicleToParkMap_.clear();
        parkingLot_.resize(levels_);
        for (int i = 0; i < levels_; i++)
        {
            totalAvailableCount_ += capacity_[i];
            parkingLot_[i].assign(capacity_[i], -1);
        }
    }

    std::string parkAtCertainLevel(int _level, std::string _vehicleNo)
    {
        if (levelToFillMap_[_level - 1] < capacity_[_level - 1])
        {
            std::string _retString = "";
            for (int i = 0; i < capacity_[_level - 1]; i++)
            {
                if (parkingLot_[_level - 1][i] == -1)
                {
                    _retString += "Parked the vehicle on the level: " + std::to_string(_level) + " at position " + std::to_string(i) + "\n";
                    levelToFillMap_[_level - 1]++;
                    vehicleToParkMap_[_vehicleNo] = std::make_pair(_level - 1, i);
                    break;
                }
            }
            return _retString;
        }
        else
        {
            std::string _retString = "There is no space available at level: " + std::to_string(_level) + "\n";
            return _retString;
        }
    }

    std::string parkVehicle(std::string _vehicleNo)
    {
        // As two vehicles cannot have same vehicle number plate we can have a map simply
        std::string _retString = "There is no slot available currently...Cannot park your vehicle\n.";
        for (int i = 0; i < levels_; i++)
        {
            if (levelToFillMap_[i] < capacity_[i])
            {
                // This means this floor is not empty and we can park the vehicle here
                for (int j = 0; j < capacity_[i]; j++)
                {
                    if (parkingLot_[i][j] == -1)
                    {
                        // parking the vehicle here
                        parkingLot_[i][j] = 0;
                        levelToFillMap_[i]++;
                        vehicleToParkMap_[_vehicleNo] = std::make_pair(i, j);
                        _retString = "Your vehicle with vehicleNo.:" + _vehicleNo + " is parked at level: " + std::to_string(i + 1) + " at the column no.: " + std::to_string(j + 1) + "\n";
                        break;
                    }
                }
                break;
            }
        }
        return _retString;
    }

    bool checkVehiclePresentOrNot(std::string _vehicleNo)
    {
        if (vehicleToParkMap_.find(_vehicleNo) != vehicleToParkMap_.end())
            return true;
        return false;
    }

    std::string removeVehicle(std::string _vehicleNo)
    {
        if (vehicleToParkMap_.find(_vehicleNo) != vehicleToParkMap_.end())
        {
            int _levelNo = vehicleToParkMap_[_vehicleNo].first;
            int _levelColNo = vehicleToParkMap_[_vehicleNo].second;

            vehicleToParkMap_.erase(vehicleToParkMap_.find(_vehicleNo));
            parkingLot_[_levelNo][_levelColNo] = -1;
            levelToFillMap_[_levelNo]--;
            std::string _retString = "Given vehicle is is removed from the level: " + std::to_string(_levelNo + 1) + "and from the column no. " + std::to_string(_levelColNo + 1) + ".\nThanks for visiting we hope to see you again.\n";
            return _retString;
        }
        else
        {
            std::string _retString = "Given vehicle is not present in the Parking Lot\n";
            return _retString;
        }
    }
};