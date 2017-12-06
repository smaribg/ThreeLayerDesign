#include "Pizza.h"

Pizza::Pizza()
{
    _name = "NotDefined";
    _price = 0;
}

Pizza::Pizza(string name, int price){
    _name = name;
    _price = price;
}

string Pizza::getName(){
    return _name;
}

void Pizza::setName(string name){
    _name = name;
}

int Pizza::getPrice(){
    return _price;
}

void Pizza::setPrice(int price){
    _price = price;
}

ostream& operator <<(ostream& out, const Pizza& pizza){
    out << pizza._name << " " << pizza._price << endl;
    return out;
}

