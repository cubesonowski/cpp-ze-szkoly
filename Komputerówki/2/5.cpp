#include <iostream>

using namespace std;

int main() {
    int n, podaj, sum;
    int i = 0;
    cin >> n;
    while (i < n){
        cin >> podaj;
        sum += podaj;
        i++;
    }
    cout << sum << endl;
}