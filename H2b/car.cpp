#include "car.h"
#include <iostream>

Car::Car(string b, string m, int y) {
brand = b;
model = m;
yearModel = y;
}

void Car::printData()
{
cout<<"Auton merkki on: "<< brand << endl;
cout << "Auton malli on: " << model << endl;
cout << "Auton vuosimalli on: " << yearModel << endl;
}
