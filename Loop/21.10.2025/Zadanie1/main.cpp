#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int suma = 0;
    int b = 0;
    int c = 0;

    do {
        cout << "Podaj liczbe: ";
        cin >> a;
        if (c == a) {
            return 0;
        }
        if (a < 0) {
            b++;
        }
        suma = a + suma;
        cout << suma << endl;
        c = a;
    } while (suma < 100 && b < 10);
}
