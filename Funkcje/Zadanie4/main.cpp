#include <iostream>

using namespace std;

double delta, a, b, c;

void podawacz() {
    cout << "Podaj liczby kolejno a, b, c" << endl;
    cin >> a >> b >> c;
}

void deltaOb(double a, double b, double c){
    delta = (b*b)-4*a*c;
}

void miejscaZerowe(double &delta){
    if (delta > 0){
        cout << "Ma dwa miejsca zerowe";
    } else if (delta == 0) {
        cout << "Ma jedno miejsce zerowe";
    } else {
        cout << "Nie ma miejsc zerowych";
    }
}

int main()
{
    podawacz();
    deltaOb(a, b, c);
    miejscaZerowe(delta);
    return 0;
}
