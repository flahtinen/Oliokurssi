#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
using std::string;

class ItalianChef : public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    std::string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
