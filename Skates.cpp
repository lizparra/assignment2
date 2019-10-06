#include "Skates.h"


Skates::Skates(string brand, string model, int numberOfWheels) {
    setBrand(brand);
    setModel(model);
    setNumberOfWheels(numberOfWheels);
}

Skates::~Skates() = default;

int Skates::getNumberOfWheels() {
    return numberOfWheels;
}

void Skates::setNumberOfWheels(int numberOfWheels) {
    this.numberOfWheels = numberOfWheels;
}

double Skates::mileageEstimate(double time) {
    double mileage = 0.2 * time;
    if(this.numberOfWheels > 4){
	mileage += mileage*0.1;
    } 
    
    return mileage;
}

string Skates::toString() {
    string s = "-> Skates\n\t";
    return "-> Skates\n" + Vehicle::toString() + "\n\tWheels: " +
           to_string(numberOfWheels);
}
