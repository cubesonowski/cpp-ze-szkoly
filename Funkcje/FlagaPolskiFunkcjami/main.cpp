#include <iostream>
#include <windows.h>

using namespace std;

void wiersz(int ileG){
    for (int i = 0; i < ileG; i++){
        cout << "*";
    }
    cout << endl;
}

void prostokat(int ileG, int ileW){
    for (int i = 0; i < ileW; i++){
        wiersz(ileG);
    }
}

int main()
{
    int ileG = 50, ileW = 10;
    prostokat(ileG, ileW);
    SetConsoleTextAttribute();
    prostokat(ileG, ileW);
    return 0;
}
