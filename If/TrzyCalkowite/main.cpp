#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;
    cout << "Podaj trzecia liczbe: " << endl;
    cin >> c;

    if (a < b){
        if (a < c){
           cout << "Pierwsza liczba jest najmniejsza";
        } else {
           cout << "Trzecia liczba jest najmniejsza";
        }
    } else {
        if (c < b){
            cout << "Trzecia liczba jest najmniejsza";
        } else {
            cout << "Druga liczba jest najmniejsza";
        }
    }

}
