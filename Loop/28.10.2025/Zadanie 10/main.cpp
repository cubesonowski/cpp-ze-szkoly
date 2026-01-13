#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        int j = 1;
        if (i >= 3){
            if (i == n){
                do {
                    cout << "*";
                    j++;
                } while (j <= n);
            } else {
                cout << "*";
                for (int a = 0; a<=i-3; a++){
                    cout << " ";
                }
                cout << "*";
            }
        } else {
            while (j <= i){
                cout << "*";
                j++;
            }
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= n; i++){
        int j = 1;
        if (i >= 3){
            if (i == n){
                do {
                    cout << "*";
                    j++;
                } while (j <= n);
            } else {
            while (j <= n-i){
                cout << " ";
                j++;
            }
            cout << "*";
            for (int a = 0; a<=i-3; a++){
                cout << " ";
            }
            cout << "*";
            }
        } else {
            while (j <= n-i){
                cout << " ";
                j++;
            }
            j = 1;
            while (j <= i){
                cout << "*";
                j++;
            }
        }
        cout << endl;
    }
}
