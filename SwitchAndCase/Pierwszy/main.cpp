#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Ktora godzina lekcyjna sie zaczyna? (podaj numer)" << endl;
    cin >> x;

    switch(x) {
        case 1: cout << "Jezyk hiszpanski"; break;
        case 2: cout << "Jezyk polski"; break;
        case 3: cout << "Informatyka"; break;
        case 4: cout << "Jezyk angielski"; break;
        case 5: cout << "Wychowanie fizyczne"; break;
        case 6: cout << "Historia"; break;
        case 7: cout << "Biologia"; break;
        default: cout << "Nie masz takiej lekcji"; break;
    }

    return 0;
}
