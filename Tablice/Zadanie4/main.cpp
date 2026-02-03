#include <iostream>

using namespace std;

void tablica1(unsigned int n, int tab[]){
    for (int i = 0; i < n; ++i){
        tab[i] = 0;
        cout << tab[i] << endl;
    }
}

void tablica2(unsigned int n, int tab[]){
    for (int i = 0; i < n; ++i){
        tab[i] = i;
        cout << tab[i] << endl;
    }
}

void tablica3(unsigned int n, int tab[]){
    for (int i = 0; i < n; ++i){
        tab[i] *= 2;
        cout << tab[i] << endl;
    }
}

void tablica4(unsigned int n, int tab[]){
    for (int i = 0; i < n; ++i){
        if (i%2 != 0){
            tab[i] = rand() % 50 - 100;
        } else {
            tab[i] = rand() % 100+2;
        }
        cout << tab[i] << endl;
    }
}

void tablica5(unsigned int n, int tab[]){
    for (int i = 0; i < n; ++i){
        tab[i] = abs(tab[i]);
        cout << tab[i] << endl;
    }
}

int main(){
    const int n = 5;
    int a[n];
    cout << "Tablica 1" << endl;
    tablica1(n, a);
    cout << "Tablica 2" << endl;
    tablica2(n, a);
    cout << "Tablica 3" << endl;
    tablica3(n, a);
    cout << "Tablica 4" << endl;
    tablica4(n, a);
    cout << "Tablica 5" << endl;
    tablica5(n, a);
}
