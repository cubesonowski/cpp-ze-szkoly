#include <iostream>

using namespace std;

double potegaDoN(int n){
    double a = 1;
    for (int i = 1; i <= n; i++){
        a = 2 * a;
    }
    return a;
}

double potegaDoN_rek(int n){
    if (n == 0){
        return 1;
    } else {
        return 2*potegaDoN_rek(n-1);
    }
}

int main()
{
    int a;
    cout << "a=";
    cin >> a;
    cout << "Rekurencyjnie" << endl;
    cout << potegaDoN_rek(a) << endl;
    cout << "Iteracyjnie" << endl;
    cout << potegaDoN(a);
    return 0;
}
