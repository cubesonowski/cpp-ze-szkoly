#include <iostream>

using namespace std;

int main()
{
    int n;
    int i = 1;
    int j = i;
    do {
        cout << "Podaj n: ";
        cin >> n;
        cout << endl;
        if (n <= 0){
            cout << "Podaj n wieksze od zera" << endl;
        }
    } while (n <= 0);
    cout << "  | ";
    while (i <= n){
        cout << i << " ";
        i++;
    }
    cout << endl;
    i = 1;
    while (i <= n){
        j = i;
        cout << i << " | ";
        if (j == 1){
            while (j <= n){
                cout << j*n << " ";
                j++;
            }
        } else {
            while (j <= n+i){
                cout << j*n << " ";
                j++;
            }
        }
        cout << endl;
        i++;
    }
}
