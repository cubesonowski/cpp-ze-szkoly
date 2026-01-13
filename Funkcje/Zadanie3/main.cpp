#include <iostream>

using namespace std;

int a, b, c, pom;

int sortowanie() {
    cin >> a >> b >> c;
    if (a > b){
        pom = a;
        a = b;
        b = pom;
    }
    if (a > c){
        pom = a;
        a = c;
        c = pom;
    }
    if (b > c){
        pom = b;
        b = c;
        c = pom;
    }
    return a, b, c;
}

int main()
{
    sortowanie();
    cout << a << ", " << b << ", " << c;
    return 0;
}
