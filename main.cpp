#include <iostream>
#include "hp.h"


int main()
{
    Heal* he1 = new Heal();

    he1->getScreen();

    std::cout << "x: " << he1->x << " y: " << he1->y << std::endl;

    he1->mimg();

    return 0;
}
