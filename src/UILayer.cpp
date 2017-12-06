#include "UILayer.h"

UILayer::UILayer()
{
    //ctor
}

void UILayer::run(){
    // Keyra UI og kalla í einhver UI föll
}

void UILayer::AddPizza(){
    //Hér ætti að leyfa notanda að búa til pizzu

    //Sendir pizzu í næsta layer:
    Pizza pizza;
    _businessLayer.addPizza(pizza);
}

void UILayer::GetAllPizzas(){

    //Sækir pizzur í næsta lag fyrir neðan
    vector<Pizza> p = _businessLayer.getAllPizzas();
}


