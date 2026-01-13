#include <iostream>

using namespace std;

int main() {
    int m = 0, k = 1, n = 2, l = 3;
    do {
        cin >> m;
    } while (m < 3);
    while (l < m){
        n = 2;
        while (n < l){
            k = 1;
            while (k < n){    
                cout << "(" << k << "," << n << "," << l << ")" << endl;
                k++;
            }
            n++;
        }
        l++;
    }
}