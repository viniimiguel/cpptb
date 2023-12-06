#ifndef HE_H_INCLUDE
#define HE_H_INCLUDE

#include <iostream>
#include <Windows.h>

class Heal {
public:
	int x;
	int y;
	void getScreen();
	void reconhece_heal();
private:
};

void Heal::getScreen() {
	int largura = GetSystemMetrics(SM_CXSCREEN);
	int altura = GetSystemMetrics(SM_CYSCREEN);

	x = largura;
	y = altura;
}


void Heal::reconhece_heal() {

}



#endif
