#include "UILayer.h"

UILayer::UILayer()
{
    //ctor
}

void UILayer::run(){
    // Keyra UI og kalla � einhver UI f�ll
}

void UILayer::AddPizza(){
    // Leyfa notanda a� b�a til pizzu
    Pizza pizza;
    _businessLayer.addPizza(pizza);
}

void UILayer::GetAllPizzas(){
    vector<Pizza> p = _businessLayer.getAllPizzas();
}


