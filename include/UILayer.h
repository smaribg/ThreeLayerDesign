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
        /*Tilvik af businesslayer (layer 2) sem er notað alltaf
        þegar þarf að kalla á föll í layer 2*/
        BusinessLayer _businessLayer;

    public:
        UILayer();

        //Dæmi um föll í UI layer, gætu verið Fyrir Umsjón, sölu o.s.frv.
        void run();
        void AddPizza();
        void GetAllPizzas();
};

#endif // UILAYER_H
