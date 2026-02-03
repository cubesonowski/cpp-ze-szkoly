#include <iostream>

using namespace std;

void tablice(unsigned int n, double tab1[], double tab2[], double tab3[]) {
    for (int i = 0; i < n * 2; ++i) {
        if (i < 3) {
            tab3[i] = tab1[i];
        }
        if (i >= 3) {
            tab3[i] = tab2[i-3];
        }
    }
}

void tablice1(unsigned int n, double tab1[], double tab2[], double tab3[]) {
    int pom1 = 0, pom2 = 0;
    for (int i = 0; i < n * 2; ++i) {
        if (i % 2 == 0) {
            tab3[i] = tab2[pom1];
            pom1++;
        } else {
            tab3[i] = tab1[pom2];
            pom2++;
        }
    }
}

void wyswietlTablice(unsigned int n, double tab[]) {
    cout << "Tablica" << endl;
    for (int i = 0; i < n; ++i) {
        cout << tab[i] << (i < n - 1 ? ", " : "");
    }
    cout << endl;
}

int main() {
    const unsigned int n = 3;
    double tab1[n], tab2[n], tab3[6];
    for (int i = 0; i < n; ++i) {
        cin >> tab1[i];
        cin >> tab2[i];
    }
    wyswietlTablice(3, tab1);
    wyswietlTablice(3, tab2); 
    tablice(n, tab1, tab2, tab3);
    wyswietlTablice(3, tab1);
    wyswietlTablice(3, tab2);
    wyswietlTablice(6, tab3);
    tablice1(n, tab1, tab2, tab3);
    wyswietlTablice(3, tab1);
    wyswietlTablice(3, tab2);
    wyswietlTablice(6, tab3);
}
