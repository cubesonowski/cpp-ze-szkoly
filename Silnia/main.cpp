#include <iostream>

using namespace std;

double silnia(int n){
    double silnia = 1;
    for (int i = 2; i <= n; i++){
        silnia = silnia * i;
    }
    return silnia;
}

//Funkcja rekurencyjna, funkcja, która sama siebie wywo³uje

double silnia_rek(int n){
    if (n==0){
        return 1;
    } else {
        return n*silnia_rek(n-1);
    }
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    /*for (int i = 0; i <= n; i++){
        cout << silnia(i) << " ";
    }*/
    cout << silnia_rek(n) << endl;
    return 0;
}
