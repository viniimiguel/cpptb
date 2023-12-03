#include <iostream>
#include "hp.h"
#include "loot.h"


int main()
{
    Heal* he1 = new Heal();
    Mc* mc1 = new Mc();


    mc1->getPoint();

    mc1->macroClick();

    he1->reconhece_heal();

    return 0;
}
