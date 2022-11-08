#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Dealership {
    string nameD;
    unsigned int maxCapD;
    vector<Showroom> showrooms;

public:
    Dealership(string name = "Generic Dealership", unsigned int = 0);
    void AddShowroom(Showroom s);
    float GetAveragePrice();
    void ShowInventory();
};