#ifndef SCREENSHOTS_H_INCLUDE
#define SCREENSHOTS_H_INCLUDE

#include <iostream>
#include <Windows.h>
#include "wingdi.h"
#include <Windows.h>
#include <fstream>


class Rec {
public:
    void recjanela();
    void SendKeyToWindow(HWND hwnd, char key);
    void SendHotKeyToWindow(HWND hwnd, BYTE virtualkey);
    void SendDefinitiveKey(HWND hwnd);
private:
};
void Rec::SendHotKeyToWindow(HWND hwnd, BYTE virtualKey) {
    keybd_event(virtualKey, 0, KEYEVENTF_EXTENDEDKEY, 0);

    keybd_event(virtualKey, 0, KEYEVENTF_KEYUP, 0);
}
void Rec::SendKeyToWindow(HWND hwnd, char key){
    SendMessage(hwnd, WM_CHAR, static_cast<WPARAM>(key), 0);
}
void Rec::SendDefinitiveKey(HWND hwnd) {
    SetForegroundWindow(hwnd);
    SetWindowPos(hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);

}
void Rec::recjanela() {
    HWND hwnd = FindWindow(NULL, "Tibia - Tomboy Lover");

    if (!hwnd) {
        std::cout << "janela nao encontrada" << std::endl;
        exit(-1);
    }
    std::cout << "janela encontrada!" << std::endl;


    SendHotKeyToWindow(hwnd, 0x50);



}
#endif
