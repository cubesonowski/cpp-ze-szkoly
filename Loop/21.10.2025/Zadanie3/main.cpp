#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Podaj liczbe: ";
    cin >> a;
    cout << endl;
    for (int i = 0; i < 100; i++){
        if (a%2 == 0){
            cout << a << endl;
            a = a + 2;
        }
        if (a%2 == 1){
            a++;
            cout << a << endl;
            a = a + 2;
        }
    }

}
