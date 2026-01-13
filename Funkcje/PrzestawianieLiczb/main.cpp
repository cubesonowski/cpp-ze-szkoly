#include <iostream>

using namespace std;

void zamien_miejscami(int &x, int &y){
    int pom = x;
    x = y;
    y = pom;
}

int main()
{
    int a, b, c;
    cout << "Podaj 3 liczby: " << endl;
    cin >> a >> b >> c;
    if (a > b){
        zamien_miejscami(a, b);
    }
    if (a > c){
        zamien_miejscami(a, c);
    }
    if (b > c){
        zamien_miejscami(b, c);
    }

    cout << a << ", " << b << ", " << c;
    return 0;
}
