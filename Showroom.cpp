#include <iostream>
#include "Vehicle.h"
#include "Showroom.h"
using namespace std;

float numV = 0;

Showroom::Showroom(string n, unsigned int mC) {
    this->name = n;
    this->maxCap = mC;
}
vector<Vehicle> Showroom::GetVehicleList() {
    return vehicles;
}
void Showroom::AddVehicle(Vehicle v) {
    if (vehicles.size() == maxCap)
        cout << "Showroom is full! Cannot add " << v.GetYearMakeModel() << endl;
    else {
        vehicles.push_back(v);
        numV++;
    }
}
void Showroom::ShowInventory() {
    if (vehicles.size() == 0)
        cout << "Unnamed Showroom is empty!" << endl;
    else {
        cout << "Vehicles in " << name << endl;
        for (unsigned int x = 0; x < vehicles.size(); x++) {
            vehicles[x].Display();
        }
    }
}
float Showroom::GetInventoryValue() {
    float totVal = 0;
    for (unsigned int x = 0; x < vehicles.size(); x++) {
        totVal = (unsigned)vehicles[x].GetPrice() + totVal;
    }
    return totVal;
}