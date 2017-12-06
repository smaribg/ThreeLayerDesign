#include "UILayer.h"

UILayer::UILayer()
{
    //ctor
}

void UILayer::run(){
    // Keyra UI og kalla í einhver UI föll
}

void UILayer::AddPizza(){
    // Leyfa notanda að búa til pizzu
    Pizza pizza;
    _businessLayer.addPizza(pizza);
}

void UILayer::GetAllPizzas(){
    vector<Pizza> p = _businessLayer.getAllPizzas();
}


