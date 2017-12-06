#ifndef UILAYER_H
#define UILAYER_H
#include<iostream>
#include<BusinessLayer.h>
#include<vector>

//Layer 1
using namespace std;

class UILayer
{
    private:
        /*Tilvik af businesslayer (layer 2) sem er nota� alltaf
        �egar �arf a� kalla � f�ll � layer 2*/
        BusinessLayer _businessLayer;

    public:
        UILayer();

        //D�mi um f�ll � UI layer, g�tu veri� Fyrir Umsj�n, s�lu o.s.frv.
        void run();
        void AddPizza();
        void GetAllPizzas();
};

#endif // UILAYER_H
