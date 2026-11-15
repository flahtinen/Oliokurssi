#include <iostream>
#include <vector>
#include "car.h"
using namespace std;

int main()
{
    vector<Car> carList;
    carList.push_back(Car("Volkswagen", "Golf", 2014));
    carList.push_back(Car("Volvo", "XC90", 2017));
    carList.push_back(Car("BMW", "X5", 2020));
    carList[1].printData();

    for (int i = 0; i < 3; i++)
    {
        carList[i].printData();
    }
    return 0;
}
