#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    /*
    //Flaga Armenii - for
    for (int j = 0; j < 9; j++){
        switch(j){
            case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); break;
            case 3: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1); break;
            case 6: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); break;
        }

        for (int i = 0; i < 30; i++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    //Flaga Armenii - while
    int j = 0;
    int i = 0;
    while (j < 9){
        switch(j){
            case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); break;
            case 3: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1); break;
            case 6: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); break;
        }

        while (i < 30){
            cout << "*";
            i++;
        }
        cout << endl;
        i = 0;
        j++;
    }

    cout << endl;

    //Flaga Armenii - do while
    j = 0;
    i = 0;
    do {
        switch(j){
            case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); break;
            case 3: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1); break;
            case 6: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); break;
        }

        do {
            cout << "*";
            i++;
        } while (i < 30);
        cout << endl;
        i = 0;
        j++;
    } while (j < 9);

    cout << endl;

    //Flaga Austrii - For
    for (int j = 0; j < 9; j++){
        switch(j){
            case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); break;
            case 3: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); break;
            case 6: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); break;
        }

        for (int i = 0; i < 30; i++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    //Flaga Austrii - while
    i = 0;
    j = 0;
    while (j < 9){
        switch(j){
            case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); break;
            case 3: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); break;
            case 6: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); break;
        }

        while (i < 30){
            cout << "*";
            i++;
        }
        cout << endl;
        i = 0;
        j++;
    }

    cout << endl;

    //Flaga Austrii - do while
    j = 0;
    i = 0;
    do {
        switch(j){
            case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); break;
            case 3: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); break;
            case 6: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); break;
        }

        do {
            cout << "*";
            i++;
        } while (i < 30);
        cout << endl;
        i = 0;
        j++;
    } while (j < 9);

    cout << endl;

    //Flaga Polski - for
        for (int j = 0; j < 10; j++){
        switch(j){
            case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); break;
            case 5: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); break;
        }

        for (int i = 0; i < 30; i++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    //Flaga Polski - while
    i = 0;
    j = 0;
    while (j < 10){
        switch(j){
            case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); break;
            case 5: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); break;
        }

        while (i < 30){
            cout << "*";
            i++;
        }
        cout << endl;
        i = 0;
        j++;
    }

    cout << endl;

    //Flaga Polski - do while
    j = 0;
    i = 0;
    do {
        switch(j){
            case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); break;
            case 5: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); break;
        }

        do {
            cout << "*";
            i++;
        } while (i < 30);
        cout << endl;
        i = 0;
        j++;
    } while (j < 10);

    cout << endl;

    //Flaga Rumunii - for
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 30; j++){
            switch(j){
                case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1); break;
                case 10: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); break;
                case 20: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); break;
            }
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    //Flaga Rumunii - while
    i = 0;
    j = 0;

    while (i < 9){
        while (j < 30){
            switch(j){
                case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1); break;
                case 10: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); break;
                case 20: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); break;
            }
            cout << "*";
            j++;
        }
        j = 0;
        cout << endl;
        i++;
    }

    cout << endl;

    //Flaga Rumunii - do while
    i = 0;
    j = 0;
    do {
        do {
            switch(j){
                case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1); break;
                case 10: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); break;
                case 20: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); break;
            }
            cout << "*";
            j++;
        } while (j < 30);
        j = 0;
        cout << endl;
        i++;
    } while (i < 9);

    cout << endl;
    */

    //Flaga USA - for
    int i = 0;
    int j = 0;
    int a = 0;
    while (j < 5) {
        while (i < 30) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1+1*16);
            cout << "*";
            i++;
        } while (i < 80) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4+4*16);
            cout << "*";
            i++;
        }
        cout << endl;
        i = 0;
        while (i < 30) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1+1*16);
            cout << "*";
            i++;
        } while (i < 80) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7+7*16);
            cout << "*";
            i++;
        }
        cout << endl;
        i = 0;
        j++;
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    return 0;
}
