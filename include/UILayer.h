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

        //Keyrir upp UI-ið
        void run();

        //Sýnir viðmótið sem er notað til að búa til pizzu og kallar síðan í næsta layer
        void AddPizza();

        //Sýnir viðmótið sem er notað til að sækja pizzur og kallar síðan í næsta layer
        void GetAllPizzas();
};

#endif // UILAYER_H
