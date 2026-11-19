#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car
{
public:
    Car(string, string, int);
    void printData();

private:
    string brand;
    string model;
    int yearModel;
};

#endif // CAR_H
