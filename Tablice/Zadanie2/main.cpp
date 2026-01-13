#include <iostream>

using namespace std;

const int w = 5;

void wczytaj(int tablica[]){
    for (int i = 0; i < w; i++){
        cin >> tablica[i];
    }
    cout << endl;
}

void wypiszParzyste(int tablica[]) {
    cout << "Wypisz parzyste liczby z tablicy" << endl;
    for (int i = 0; i < w; i++){
        if (tablica[i]%2 == 0) cout << tablica[i] << endl;
    }
    cout << endl;
}

void wypiszTrzy(int tablica[]) {
    cout << "Wypisz liczby ktore dziela sie przez 3" << endl;
    for (int i = 0; i < w; i++){
        if (tablica[i]%3 == 0) cout << tablica[i] << endl;
    }
    cout << endl;
}
// naprawic
void wypiszWszystkieCyfryParzyste(int tablica[]) {
    int pom;
    cout << "Wypisz parzyste cyfry z tablicy" << endl;
    for (int i = 0; i < w; i++){
        int pom = tablica[i];
        while (pom != 0){
            pom = tablica[i] % 10;
            if (pom%2 == 0) cout << tablica[i] << endl;
            pom = tablica[i] / 10;
        }
    }
    cout << endl;
}
// naprawic
void wypiszSumaOsiem(int tablica[]) {
    int pom, sumaCyfr;
    cout << "Wypisz wszystkie liczby z tablica ktorych suma cyfr wynosi 8" << endl;
    for (int i = 0; i < w; i++){
        int pom = tablica[i];
        while (pom != 0){
            pom = tablica[i] % 10;
            sumaCyfr += pom;
            pom = tablica[i] / 10;
        }
        if (sumaCyfr == 8) cout << tablica[i] << endl;
    }
    cout << endl;
}

void wypiszIndeksyParzyste(int tablica[]){
    cout << "Wypisz indeksy parzyste" << endl;
    for (int i = 0; i < w; i++){
        if (i%2 == 0){
            cout << tablica[i] << endl;
        }
    }
    cout << endl;
}

int main()
{
    int tablica[w];
    wczytaj(tablica);
    wypiszParzyste(tablica);
    wypiszTrzy(tablica);
    wypiszWszystkieCyfryParzyste(tablica);
    wypiszSumaOsiem(tablica);
    wypiszIndeksyParzyste(tablica);
}
