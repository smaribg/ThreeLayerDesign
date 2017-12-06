#include "BusinessLayer.h"

BusinessLayer::BusinessLayer()
{
    //ctor
}

void BusinessLayer::addPizza(Pizza pizza){
    //Sendir pizzu �fram til data layer
    _dataLayer.addPizza(pizza);
}

vector<Pizza> BusinessLayer::getAllPizzas(){
    //S�kir allar pizzur �r data layer og skilar
    return _dataLayer.getAllPizzas();
}
