#include <iostream>

using namespace std;

const int w = 3;

void tablice(unsigned int n, int tab1[], int tab2[], int tab3[]) {
    for (int i = 0; i < n; ++i) {
        tab3[i] = tab1[i] + tab2[i];
    }
}

void tablice1(unsigned int n, int tab1[], int tab2[], int tab3[]) {
    for (int i = 0; i < n; ++i) {
        tab3[i] = (tab1[i] > tab2[i] ? tab1[i] : tab2[i]);
    }
}

void tablice2(unsigned int n, int tab1[], int tab2[], int tab3[]) {
    for (int i = 0; i < n; ++i) {
        tab2[i] = tab1[i];
    }
    for (int i = 0; i < n; ++i) {
        tab3[i] = tab2[i];
    }
    for (int i = 0; i < n; ++i) {
        tab1[i] = tab3[i];
    }
}

void pokazTablice(unsigned int n, int tab[]) {
    cout << "Tablica" << endl;
    for (int i = 0; i < w; ++i) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

int main() {
    int tab1[w], tab2[w], tab3[w];
    for (int i = 0; i < w; ++i) {
        cin >> tab1[i];
        cin >> tab2[i];
        cin >> tab3[i];
    }
    pokazTablice(w, tab1);
    pokazTablice(w, tab2);
    pokazTablice(w, tab3);
    tablice(w, tab1, tab2, tab3);
    pokazTablice(w, tab1);
    pokazTablice(w, tab2);
    pokazTablice(w, tab3);
    tablice1(w, tab1, tab2, tab3);
    pokazTablice(w, tab1);
    pokazTablice(w, tab2);
    pokazTablice(w, tab3);
    tablice2(w, tab1, tab2, tab3);
    pokazTablice(w, tab1);
    pokazTablice(w, tab2);
    pokazTablice(w, tab3);
    return 0;
}
