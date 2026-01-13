#include <iostream>

using namespace std;

int main()
{
    float a, b, h;
    int bryla;
    cout << "Wybierz bryle do obliczenia jej objetosci\nDo wyboru:\n1 - szescian\n2 - prostopadloscian\n3 - kula\n4 - walec" << endl;
    cin >> bryla;
    switch (bryla){
        case 1:
            cout << "Podaj dlugosc boku" << endl;
            cin >> a;
            cout << "Objetosc wynosi: " << a*a*a << endl;
            break;
        case 2:
            cout << "Podaj dlugosc 1 boku w podstawie" << endl;
            cin >> a;
            cout << "Podaj dlugosc 2 boku w podstawie" << endl;
            cin >> b;
            cout << "Podaj wysokosc" << endl;
            cin >> h;
            cout << "Objetosc wynosi: " << a*b*h << endl;
            break;
        case 3:
            cout << "Podaj promien" << endl;
            cin >> a;
            cout << "Objetosc wynosi: " << (4/3) * 3.14 * a*a*a << endl;
            break;
        case 4:
            cout << "Podaj promien" << endl;
            cin >> a;
            cout << "Podaj wysokosc" << endl;
            cin >> h;
            cout << "Objetosc wynosi: " << 3.14 * a*a * h << endl;
            break;
    }
    return 0;
}
