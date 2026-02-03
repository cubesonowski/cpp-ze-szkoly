#include <iostream>

using namespace std;

void tablica1(unsigned int n, int tab1[], int tab2[]) {
    for (int i = 0; i < n; ++i){
        tab2[i] = tab1[i];
    }
}

void tablica2(unsigned int n, int tab1[], int tab2[]) {
    for (int i = 0; i < n; ++i){
        tab2[n-i-1] = tab1[i];
    }
}

void pokazTablice(unsigned int n, int tab1[], int tab2[]){
    cout << "tab1 = {";
    for (int i = 0; i < n; ++i){
        cout << tab1[i] << (i < n - 1 ? "," : "");
    }
    cout << "}" << endl;
    cout << "tab2 = {";
    for (int i = 0; i < n; ++i){
        cout << tab2[i] << (i < n - 1 ? "," : "");
    }
    cout << "}" << endl;
}

int main()
{
    const int n = 5;
    int a[n], b[n];
    for (int i = 0; i < n; ++i){
        cout << "a[" << i << "]" << endl;
        cin >> a[i];
        cout << "b[" << i << "]" << endl;
        cin >> b[i];
    }
    tablica1(n, a, b);
    pokazTablice(n, a, b);
    tablica2(n, a, b);
    pokazTablice(n, a, b);
}
