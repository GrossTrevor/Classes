#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Showroom {
    string name;
    vector<Vehicle> vehicles;
    unsigned int maxCap;

public:
    Showroom(string name = "Unnamed Showroom", unsigned int maxCap = 0);
    vector<Vehicle> GetVehicleList();
    void AddVehicle(Vehicle v);
    void ShowInventory();
    float GetInventoryValue();
    float GetNumVehicles();
    string GetName();
};