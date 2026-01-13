#include <iostream>

using namespace std;

int main()
{
    int i, ile, wiersz = 0, ile_wiersz;

    cout << "Ile chcesz narysowac gwiazdek w jednym wierszu?: ";
    cin >> ile;

    cout << "W ilu wierszach dac gwiazdki?: ";
    cin >> ile_wiersz;

    do {
        //Printowanie wiersza
        do {
            cout << "*";
            i++;
        } while (i<ile);
        //Przejscie do nastepnego wiersza i zerowanie i
        cout << endl;
        wiersz++;
        i = 0;
    } while (ile_wiersz > wiersz);

    i = 0;
    wiersz = 0;
    cout << endl;

    while(ile_wiersz > wiersz){
        while(i<ile){
            cout << "*";
            i++;
        }
        cout << endl;
        wiersz++;
        i = 0;
    }

    cout << endl;

    for (wiersz = 0; ile_wiersz > wiersz; wiersz++){
        for (i = 0; i < ile; i++){
            cout << "*";
        }
        cout << endl;
        i = 0;
    }

    for (wiersz = 0; wiersz < ile_wiersz; wiersz++){
        for (i = 0; i < ile; i++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
