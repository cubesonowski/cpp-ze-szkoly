#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    int i = 0;
    int j;
    while (i < 12){
        j = 0;
        while (j < 5){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            cout << "*";
            j++;
        }
        while (j < 10){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
            cout << "*";
            j++;
        }
        while (j < 15){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}