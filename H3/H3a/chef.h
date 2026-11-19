#ifndef CHEF_H
#define CHEF_H
#include <string>
using std::string;

class Chef
{
public:
    Chef(string);
    ~Chef();
    void makeSalad();
    void makeSoup();

protected:
    std::string name;
};

#endif // CHEF_H
