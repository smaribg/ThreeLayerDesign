#ifndef BUSINESSLAYER_H
#define BUSINESSLAYER_H
#include <iostream>
#include <DataLayer.h>
#include<vector>

//Layer 2
using namespace std;

class BusinessLayer
{
    private:
        // Tilvik af datalayer (layer 3)
        DataLayer _dataLayer;

    public:
        BusinessLayer();
        void addPizza(Pizza pizza);
        vector<Pizza> getAllPizzas();
};

#endif // BUSINESSLAYER_H
