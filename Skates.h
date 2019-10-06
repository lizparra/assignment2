#ifndef DRIVINGSIMULATOR_SKATES_H
#define DRIVINGSIMULATOR_SKATES_H

#include "Vehicle.h"

class Skates : public Vehicle {

private:
    int numberOfWheels;

public:
    Skates();

    explicit Skates(string brand, string model,
                 int numberOfWheels = 4);

    virtual ~Skates();
    int getNumberOfWheels();
    void setNumberOfWheels(int numberOfWheels);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_SKATES_H

