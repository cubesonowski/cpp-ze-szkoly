#include <iostream>

using namespace std;

const int w = 10;

void wpisz(float tablica[]){
    float a;
    for (int i = 0; i < w; i++){
        cin >> a;
        tablica[i] = a*a;
    }
}

void wypisz(float tablica[]){
    for (int i = 0; i < w; i++){
        if (tablica[i] >= 4 && tablica[i] <= 15) cout << tablica[i] << endl;
    }
}

int main()
{
    float tablica[w];
    wpisz(tablica);
    cout << endl;
    wypisz(tablica);
    return 0;
}
