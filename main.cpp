#include <iostream>
#include "hp.h"
#include "loot.h"
#include "screenshots.h"


int main()
{
    BYTE htk = 0x48;


    Heal* he1 = new Heal();
    Mc* mc1 = new Mc();
    Rec* r1 = new Rec();

    mc1->getPoint();

    r1->recjanela();

    r1->TakeAScreenShot(htk);


    return 0;
}
