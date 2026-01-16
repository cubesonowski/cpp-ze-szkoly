#include <iostream>

using namespace std;

int NWD(int a, int b) {
    if (b == 0){
        return a;
    } else {
        NWD(b, a%b);
    }
}

int NWD_it(int a, int b){
    int r=a%b;
    while (r != 0){
        a = b;
        b = r;
        r = a%b;
    }
    return b;
}

//znajdowanie a, b najwiekszych int dzielnikow
int main() {
    int a, b;
    cout << "Podaj a, b:" << endl;
    cin >> a >> b;
    cout << "Najwiekszy wspolny dzielnik: " << NWD_it(a, b);
}
