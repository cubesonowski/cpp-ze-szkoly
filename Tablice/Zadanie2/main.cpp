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

void wypiszWszystkieCyfryParzyste(int tablica[]) {
    int pom, cyfra, dziel;
    bool wszystkieParzyste;
    cout << "Wypisz liczbe ktora ma wszystkie parzyste cyfry" << endl;
    for (int i = 0; i < w; i++){
        dziel = 1, pom = tablica[i];
        wszystkieParzyste = true;
        while (pom > 0) {
            cyfra = pom%10;
            if (cyfra%2 != 0) {
                wszystkieParzyste = false;
                break;
            }
            dziel = 10 * dziel;
            pom = tablica[i] / dziel;
        }
        if (wszystkieParzyste) cout << tablica[i] << endl;
    }
    cout << endl;
}

void wypiszSumaOsiem(int tablica[]) {
    int pom, cyfra, dziel, sumaCyfr = 0;
    cout << "Wypisz wszystkie liczby z tablicy ktorych suma cyfr wynosi 8" << endl;
    for (int i = 0; i < w; i++){
        dziel = 1, sumaCyfr = 0, pom = tablica[i];
        while (pom > 0) {
            cyfra = pom%10;
            sumaCyfr += cyfra;
            dziel = 10 * dziel;
            pom = tablica[i] / dziel;
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
