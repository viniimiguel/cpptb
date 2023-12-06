#ifndef SCREENSHOTS_H_INCLUDE
#define SCREENSHOTS_H_INCLUDE

#include <iostream>
#include <Windows.h>
#include "wingdi.h"
#include <Windows.h>


class Rec {
public:
    void recjanela();

private:
};

void Rec::recjanela() {
    HWND hwnd = FindWindow(NULL, "Tibia - Tomboy Lover");

    if (!hwnd) {
        std::cout << "janela nao encontrada" << std::endl;
        exit(-1);
    }
    std::cout << "janela encontrada!" << std::endl;

    SetForegroundWindow(hwnd);
    SetWindowPos(hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);

    Sleep(2000);
    for (int i = 0; i < 5; i++) {
        keybd_event(0x50, 0, 0, 0);
        Sleep(1000);

    }

}
#endif
