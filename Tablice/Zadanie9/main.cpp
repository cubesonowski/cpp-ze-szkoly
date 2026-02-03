#include <iostream>
#include <iomanip>

using namespace std;

void obliczPrzekatne(const unsigned w, int tab[10][10]) {
    int przekatna1 = 0, przekatna2 = 0;
    for (int i = 0; i < w; ++i) {
        przekatna1 += tab[i][i];
        przekatna2 += tab[w-i-1][i];
    }
    cout << "Przekatna 1: " << przekatna1 << endl;
    cout << "Przekatna 2: " << przekatna2 << endl;
}

void obliczPowyzejPrzekatnej(const unsigned w, int tab[10][10]) {
    int powyzejPrzekatnej = 0;
    for (int i = 0; i < w; ++i) {
        for (int j = i + 1; j < w; ++j) {
            powyzejPrzekatnej += tab[i][j];
        }
    }
    cout << "Suma wartosci powyzej przekatnej wynosi: " << powyzejPrzekatnej << endl;
}

void pokazTablice(const unsigned int w, int tab[10][10]) {
    cout << "Tablica 1" << endl;
    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < w; ++j) {
            cout << setw(5) << tab[i][j];
        }
        cout << endl;
    }
}

void pokazTablice2(const unsigned int ww, int tab[8][8]) {
    cout << "Tablica 2" << endl;
    for (int i = 0; i < ww; ++i) {
        for (int j = 0; j < ww; ++j) {
            cout << setw(5) << tab[i][j];
        }
        cout << endl;
    }
}

void cwiartka(const unsigned int ww, int tab[8][8]) {
    int pom[8][8];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            pom[i][j] = tab[i+4][j];
        }
        for (int j = 4; j < 8; ++j){
            pom[i][j] = tab[i][j-4];
        }
    }
    for (int i = 4; i < 8; ++i) { 
        for (int j = 0; j < 4; ++j) {
            pom[i][j] = tab[i][j+4];
        }
        for (int j = 4; j < 8; ++j) {
            pom[i][j] = tab[i-4][j];
        }
    }
    pokazTablice2(ww, pom);
}

int main(){
    const unsigned int w = 10, ww = 8;
    int tablica[w][w];
    int tablica1[ww][ww];
    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < w; ++j) {
            tablica[i][j] = rand() % 81 + 10;
        }
    }
    for (int i = 0; i < ww; ++i) {
        for (int j = 0; j < ww; ++j) {
            tablica1[i][j] = rand() % 81 + 10;
        }
    }
    pokazTablice(w, tablica);
    pokazTablice2(ww, tablica1);
    obliczPrzekatne(w, tablica);
    obliczPowyzejPrzekatnej(w, tablica);
    cwiartka(ww, tablica1); 
    return 0;
}
