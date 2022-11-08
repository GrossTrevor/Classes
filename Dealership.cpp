#include <iostream>
#include "Vehicle.h"
#include "Showroom.h"
#include "Dealership.h"
using namespace std;

Dealership::Dealership(string nD, unsigned int mCD) {
    this->nameD = nD;
    this->maxCapD = mCD;
}
void Dealership::AddShowroom(Showroom s) {
    if (showrooms.size() == maxCapD)
        cout << "Dealership is full, can't add another showroom!" << endl;
    else
        showrooms.push_back(s);
}
float Dealership::GetAveragePrice() {
    if (showrooms.size() == 0)
        return 0;
    int count = 0;
    float sum = 0;
    for (unsigned int x = 0; x < showrooms.size(); x++) {
        vector<Vehicle> vehicles = showrooms[x].GetVehicleList();
        for (unsigned int y = 0; y < vehicles.size(); y++) {
            sum += vehicles[y].GetPrice();
            count++;
        }
    }
    return sum / count;
}
void Dealership::ShowInventory() {
    if (showrooms.size() == 0)
        cout << "Generic Dealership is empty!" << endl;
    else {
        for (unsigned int x = 0; x < showrooms.size(); x++) {
            showrooms[x].ShowInventory();
            cout << endl;
        }
    }
    cout << "Average car price: $" << GetAveragePrice();
}