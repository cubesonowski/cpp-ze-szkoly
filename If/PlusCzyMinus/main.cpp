#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Podaj liczbe: " << endl;
    cin >> x;
    if (x > 0){
        cout << "Liczba jest dodatnia" << endl;
    } else {
        cout << "Liczba jest ujemna" << endl;
    }
}
