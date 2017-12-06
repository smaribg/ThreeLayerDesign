#ifndef DATALAYER_H
#define DATALAYER_H
#include <iostream>
#include<fstream>
#include<string>
#include <Pizza.h>
#include<vector>

//Layer 3
using namespace std;
class DataLayer
{
    private:

    public:
        DataLayer();
        void addPizza(Pizza pizza);
        vector<Pizza> getAllPizzas();
};

#endif // DATALAYER_H
