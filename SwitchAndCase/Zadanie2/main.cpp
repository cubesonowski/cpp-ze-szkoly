#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Podaj numer dnia (od 1 do 7)" << endl;
    cin >> x;

    switch(x){
        case 1: cout << "Poniedzialek - milego startu tygodnia!" << endl; break;
        case 2: cout << "Wtorek - milej kawusi!" << endl; break;
        case 3: cout << "Sroda - juz srodek tygodnia, za horyzontem weekend!" << endl; break;
        case 4: cout << "Czwartek - juz jutro piatek!" << endl; break;
        case 5: cout << "Piatek - weekendu poczatek!" << endl; break;
        case 6: cout << "Sobota - dobrego wypoczynku!" << endl; break;
        case 7: cout << "Niedziela - dobrego wypoczynku!" << endl; break;
        default: cout << "Podales zly numer dnia" << endl; break;
    }

    return 0;
}
