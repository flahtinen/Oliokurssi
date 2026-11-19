#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    //Osa 1, tehtävät 1-5
    Chef chef1("Gordon Ramsay");
    chef1.makeSalad();
    chef1.makeSoup();

    //Osa 2, tehtävät 6-10
    ItalianChef chef2("Anthony Bourdain");
    chef2.makeSalad();
    chef2.makeSoup();
    chef2.makePasta();
    cout << "name of the Italian Chef is " << chef2.getName() << endl;
    return 0;
}
