#include <iostream>
#include <iomanip>

using namespace std;

const int w = 20;
const int k = 40;

void wypelnijLosowo(int tablica[w][k]){
    for (int i = 0; i < w; i++){
        for (int j = 0; j < k; j++){
            tablica[i][j] = -10+rand()%21;
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

int main()
{
    int tablica[w][k];
    srand(time(0));
    wypelnijLosowo(tablica);
    wypisz2(tablica);
}
