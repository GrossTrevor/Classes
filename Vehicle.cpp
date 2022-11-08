#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle() {}
void Vehicle::Display() {
	cout << year << " " << make << " " << model << " $" << price << " " << mileage << endl;
}
Vehicle::Vehicle(string mk, string md, int yr, float pr, int mi) {
	this->make = mk;
	this->model = md;
	this->year = yr;
	this->price = pr;
	this->mileage = mi;
}

string Vehicle::GetYearMakeModel() {
	cout << year << " " << make << " " << model;
	return "";
}

float Vehicle::GetPrice() {
	return price;
}