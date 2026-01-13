#include <iostream>

using namespace std;

double zKelDoCelsjusz(double n){
    n -= 273.15;
    return n;
}

double zFarDoCelsjusz(double n){
    n = 5.0/9.0*(n - 32);
    return n;
}

double zFarDoKelwin(double n){
    n = 5.0/9.0*(n + 459.67);
    return n;
}

double zCelDoKelwin(double n){
    n += 273.15;
    return n;
}

double zCelDoFarenheit(double n){
    n = 9.0/5.0*n + 32;
    return n;
}

double zKelDoFarenheit(double n){
    n = n*9.0/5.0 - 459.67;
    return n;
}

int main()
{
    cout << zKelDoCelsjusz(300) << endl;
    cout << zFarDoCelsjusz(300) << endl;
    cout << zFarDoKelwin(300) << endl;
    cout << zCelDoKelwin(300) << endl;
    cout << zCelDoFarenheit(300) << endl;
    cout << zKelDoFarenheit(300) << endl;
}
