#include <iostream>

using namespace std;

int main()
{
    int grubosc;
    int szerokosc;
    int wysokosc;
    do {
        cout << "Podaj grubosc: ";
        cin >> grubosc;
        cout << endl;
        cout << "Podaj szerokosc: ";
        cin >> szerokosc;
        cout << endl;
        cout << "Podaj wysokosc: ";
        cin >> wysokosc;
        cout << endl;
        if (szerokosc <= 0 && wysokosc <= 0 && grubosc <= 0){
            return 0;
        }
    } while (wysokosc < grubosc
             || wysokosc < szerokosc
             || szerokosc < grubosc
             || wysokosc == grubosc
             || wysokosc == szerokosc
             || szerokosc == grubosc);

    for (int i = 0; i < wysokosc; i++){
        if (i >= wysokosc - grubosc){
            int j = 0;
            while (j < szerokosc){
                cout << "*";
                j++;
            }
        } else {
            for (int i = 0; i < grubosc; i++){
                cout << "*";
            }
        }
        cout << endl;
    }
}
