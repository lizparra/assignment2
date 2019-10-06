#include "Jet.h"
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

Jet::Jet() {
    numberOfEngines = 1;
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int numberOfEngines) {
    this.numberOfEngines = numberOfEngines;

}

double Jet::mileageEstimate(double time) {
    srand(time(NULL)); 
    int random = ((rand() % 60) + 40);
    double mileage = random * time;
    if (numberOfEngines > 2 && fuelType == "Rocket") {
        for(int i = 0; i < numberOfEngines; i++)
		mileage += mileage * 0.05;
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           getNumberOfEngines();
}
