#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Vehicle {
    string make = "COP3503";
    string model = "Rust Bucket";
    unsigned int year = 1900;
    float price = 0;
    unsigned int mileage = 0;

public:
    Vehicle();
    void Display();
    Vehicle(string make, string model, int year, float price, int mileage);
    string GetYearMakeModel();
    float GetPrice();
};
