#include <iostream>

using namespace std;

int main()
{
    /*Specyfikacja
    dane: n - liczba calkowita, podana przez uzytkownika

    Zmienne pomocnicze: liczba calkowita - i, indeks instrukcji iteracyjnej
    Suma- liczba calkowita, buowa sumy liczb wewnatrz instrukcji iteracyjnej
    Wyniki komunikat inforumajcy uzytkownika, czy liczba n jest liczba doskonala

    Lista krokow
    Schemat blokowy
    Program
    Pseudokod
    */

    int n;
    int suma = 0;
    int i = 1;
    cout << "Podaj n: ";
    cin >> n;
    cout << endl;

    while (i<=n/2){
        if (n%i == 0){
            suma+=i;
        }
        i++;
    }

    if (suma == n){
        cout << "Liczba n jest liczba doskonala";
    } else {
        cout << "Liczba n nie jest liczba doskonala";
    }

    return 0;
}
