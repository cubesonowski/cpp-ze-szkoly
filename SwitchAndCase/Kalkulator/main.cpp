#include <iostream>

using namespace std;

int main()
{
    float x, y;
    char dzialanie;

    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "Podaj rodzaj dzialania (+ - * /): ";
    cin >> dzialanie;

    switch(dzialanie){
        case '+': cout << x << dzialanie << y << "=" << x+y << endl; break;
        case '-': cout << x << dzialanie << y << "=" << x-y << endl; break;
        case '*': cout << x << dzialanie << y << "=" << x*y << endl; break;
        case '/':
            if (y == 0){
                cout << "Nie dziel przez zero!" << endl; break;
            } else {
                cout << x << dzialanie << y << "=" << x/y << endl; break;
            }
        default: cout << "Podales zly rodzaj dzialania" << endl; break;
    }

    return 0;
}
