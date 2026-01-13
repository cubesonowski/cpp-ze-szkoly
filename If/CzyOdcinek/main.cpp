#include <iostream>

using namespace std;

int main()
{
    double x;
    cout << "Podaj dlugosc odcinka: " << endl;
    cin >> x;
    if (x > 0) {
        cout << "Podales liczbe dodatnia. \nDobrze bo ma to byc dlugosc odcinka. \nMozesz narysowac odcinek. \nDziekuje za myslenie i pomoc w podawaniu odpowiednich danych!";
    } else {
        cout << "Podales liczbe niedodatnia. \nZle bo odcinek nie moze byc rowny 0 lub ujemny. \nNie mozesz narysowac odcinka.";
    }
    return 0;
}
