#include <iostream>

using namespace std;

int main()
{
    float a = 0;
    float c = 0;
    float suma = 0;
    int i = 0;
    float min;
    float max;
    char wybor;
    do {
        cout << "Podaj liczbe: ";
        cin >> a;
        if (c == 0){
            min = a;
        }
        if (a > c){
            max = a;
        }
        if (a < c){
            min = a;
        }
        suma = suma + a;
        i++;
        c = a;
        cout << "Chcesz kontynuowac? T/N: ";
        cin >> wybor;
        cout << endl;
    } while (wybor == 'T');
    cout << "Srednia: " << suma / i << endl;
    cout << "Maksymalna: " << max << endl;
    cout << "Minimalna: " << min << endl;
}
