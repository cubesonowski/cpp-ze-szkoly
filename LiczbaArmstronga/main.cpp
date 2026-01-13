#include <iostream>

using namespace std;

int main()
{
    int n = 0,
    kopia,
    suma = 0,
    licznik = 0,
    i = 1,
    ss = 0,
    s = 1,
    j = 0;

    cout << "Podaj liczbe: " << endl;
    cin >> n;

    kopia = n;

    while (kopia > 0) {
        kopia = kopia/10;
        licznik++;
    }

    kopia = n;

    while (i <= licznik) {
        ss = kopia%10;
        kopia = kopia/10;
        while (j < licznik) {
            s = s*ss;
            j++;
        }
        j = 0;
        suma = suma+s;
        s = 1;
        i++;
    }

    if (suma == n){
        cout << "Jest armstronga";
    } else {
        cout << "Nie jest armstronga";
    }

    return 0;
}
