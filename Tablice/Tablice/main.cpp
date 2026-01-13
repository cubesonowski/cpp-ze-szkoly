#include <iostream>
#include <iomanip>

using namespace std;

/* Tablica - ci¹g ustalonej liczby elementów tego samego typu, odwo³ujemy siê do tego poprzez wspóln¹ nazwê. Dostêp do elementu za pomoc¹ nazwy i indeksu. Mo¿e byæ jednowymiarowa lub wiêksza.*/

const int w = 3, k = 3;

float srednia(int tablica[w][k]){
    float suma = 0;
    //int licz = 0;
    for (int i = 0; i < w; i++){
        for (int j = 0; j < k; j++){
            suma += tablica[i][j];
            //licz++;
        }
    }
    return suma/(w*k);
    //return suma/licz;
}

int suma(int tablica[], int rozmiar){
    int suma = 0;
    for (int i = 0; i < rozmiar; i++){
        suma += tablica[i];
    }
    return suma;
}

void wczytaj2(int a[w][k]){
    for (int i = 0; i < w; i++){
        for (int j = 0; j < k; j++) {
            cin >> a[i][j];
        }
    }
}

void wypisz2(int a[w][k]){
    for (int i = 0; i < w; i++){
        for (int j = 0; j < k; j++){
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
}

void wczytaj(int a[], int rozmiar){
    for (int i = 0; i < rozmiar; i++){
        cout << "Liczba = ";
        cin >> a[i];
    }
    cout << endl;
}

void wypisz(int a[], int rozmiar){
    for (int i = 0; i < rozmiar; i++){
        cout << a[i];
        cout << endl;
    }
}

int main() {
    //int tablica[8], tab2[5];
    //wczytaj(tablica, 8);
    //cout << suma(tablica, 8);
    //wypisz(tablica, 8);
    //wczytaj(tab2, 5);
    //wypisz(tab2, 5);

    int tab[2][3];
    wczytaj2(tab);
    wypisz2(tab);
    cout << srednia(tab);
    return 0;
}
