#include <iostream>

using namespace std;

int main()
{
    double bok1;
    double bok2;
    double h;

    cout << "Podaj dlugosc boku 1: " << endl;
    cin >> bok1;
    cout << "Podaj dlugosc boku 2: " << endl;
    cin >> bok2;
    cout << "Podaj wysokosc trapezu: " << endl;
    cin >> h;

    double pole = h*(bok1+bok2)/2;
    double obwod = bok1*2+bok2*2;

    cout << "Pole wynosi: " << pole << endl;
    cout << "Obwod wynosi: " << obwod << endl;
}
