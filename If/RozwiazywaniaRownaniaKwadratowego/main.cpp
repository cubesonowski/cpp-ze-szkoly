#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float a, b, c, delta;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    if (a != 0){
        //Funkcja kwadratowa
        delta = b*b-4*a*c;

        if (delta > 0){
            cout << "Funkcja kwadratowa" << endl;
            cout << "x1 = " << (-b-sqrt(delta))/(2*a) << endl;
            cout << "x2 = " << (-b+sqrt(delta))/(2*a) << endl;
        } else {
            if (delta == 0){
                cout << "Funkcja kwadratowa" << endl;
                cout << "x1 = x2 = " << -b/2*a << endl;
            } else {
                cout << "Funkcja kwadratowa" << endl;
                cout << "Brak miejsc zerowych" << endl;
            }
        }
    } else {
        //Nie funkcja kwadratowa
        if (b != 0) {
            cout << "Funkcja liniowa\nx = " << -c/b << endl;
        } else {
            cout << "Funkcja stala\ny = " << c << endl;
        }
    }
}
