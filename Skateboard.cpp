#include "Skateboard.h"
#include <cmath>
#include<ctime>
#include<cstdlib>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    srand(time(NULL));
    double random = ((double) rand() / (RAND_MAX));
    if(random > 0.5){
	random -= 0.4;
    }
    if(floor(random) == 0){
	random = 1;
    } else {
	random = floor(random);
    }	
    double mileage = random * time;
    double oneThird = time/3.0;
    double rand = (((double)rand() % (oneThird - 1)) + 1.0);  
    if(floor(rand) == 0){
	rand = 1;
    } else {
	rand = floor(rand);
    }
    if(time > 25 && time < 250){
    	mileage += rand;	
    }
    
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
