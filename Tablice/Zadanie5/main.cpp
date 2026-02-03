#include <iostream>

using namespace std;

double tablica1(unsigned int n, int tab[]) {
    int suma = 0;
    for (int i = 0; i < n; ++i){
        suma += tab[i];
    }
    double sredniaElementow = suma / n;
    return sredniaElementow;
}

double tablica2(unsigned int n, int tab[]) {
    int suma = 0;
    for (int i = 0; i < n; ++i){
        suma += tab[i];
    }
    return suma;
}

double tablica3(unsigned int n, int tab[]) {
    int sumaKwadratow = 0;
    for (int i = 0; i < n; ++i){
        sumaKwadratow += tab[i] * tab[i];
    }
    return sumaKwadratow;
}

int main()
{
    int n;
    cin >> n;
    int tablica[n];
    for (int i = 0; i < n; ++i){
        cin >> tablica[i];
    }
    cout << tablica1(n, tablica) << endl;
    cout << tablica2(n, tablica) << endl;
    cout << tablica3(n, tablica) << endl;
}
