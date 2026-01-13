#include <iostream>
//#include <windows.h>


using namespace std;

int main()
{
    int ile_wiersz, ile_kwadratow_cze, ile_kwadratow;

    ile_wiersz = 4;
    ile_kwadratow = 20;
    ile_kwadratow_cze = 20;

    for (int i = 0; i < ile_wiersz; i++){
        for(int j = 0; j < ile_kwadratow; j++){
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < ile_wiersz; i++){
        for(int a = 0; a < ile_kwadratow_cze; a++){
            //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout << "*";
        }
        cout << endl;
    }

    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    return 0;
}
