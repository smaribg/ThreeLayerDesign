#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>

using namespace std;
class Pizza
{
    private:
        string _name;
        int _price;

    public:
        Pizza();
        Pizza(string name, int price);
        string getName();
        void setName(string name);
        int getPrice();
        void setPrice(int price);

        friend ostream& operator <<(ostream& out, const Pizza& pizza);

};

#endif // PIZZA_H
