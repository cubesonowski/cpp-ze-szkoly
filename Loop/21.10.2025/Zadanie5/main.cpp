#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cout << "Podaj dlugosc pierwszego boku: ";
    cin >> a;
    cout << endl;
    cout << "Podaj dlugosc drugiego boku: ";
    cin >> b;
    cout << endl;

    for (int i = 0; i < b; i++){
        if (i == 0 || i == b-1){
            for (int i = 0; i < a; i++){
                cout << "*";
            }
            cout << endl;
        } else {
            cout << "*";
            for (int i = 0; i < a-2; i++){
                cout << " ";
            }
            cout << "*" << endl;
        }
    }
}
