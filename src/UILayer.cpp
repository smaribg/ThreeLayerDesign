#include "UILayer.h"

UILayer::UILayer()
{
    //ctor
}

void UILayer::run(){
    // Keyra UI og kalla � einhver UI f�ll
}

void UILayer::AddPizza(){
    //H�r �tti a� leyfa notanda a� b�a til pizzu

    //Sendir pizzu � n�sta layer:
    Pizza pizza;
    _businessLayer.addPizza(pizza);
}

void UILayer::GetAllPizzas(){

    //S�kir pizzur � n�sta lag fyrir ne�an
    vector<Pizza> p = _businessLayer.getAllPizzas();
}


