#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version1\ParkingLot.h>
#include <vector>
#include <iostream>

int main()
{
    int _levels;
    std::cout << "Enter number of levels in the parking lot\n";
    std::cin >> _levels;
    std::vector<int> _capacity(_levels);
    std::cout << "Enter capacity of each level seperated by space\n";
    for (int i = 0; i < _levels; i++)
    {
        std::cin >> _capacity[i];
    }

    ParkingLot _parkingLot = ParkingLot(_levels, _capacity);
    /*
        You can simulate your parking lot system here
    */
    std::cout << (_parkingLot.checkVehiclePresentOrNot("Car 1") ? "present" : "not present");
    return 0;
}