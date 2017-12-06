#include "BusinessLayer.h"

BusinessLayer::BusinessLayer()
{
    //ctor
}

void BusinessLayer::addPizza(Pizza pizza){
    //Sendir pizzu áfram til data layer
    _dataLayer.addPizza(pizza);
}

vector<Pizza> BusinessLayer::getAllPizzas(){
    //Sækir allar pizzur úr data layer og skilar
    return _dataLayer.getAllPizzas();
}
