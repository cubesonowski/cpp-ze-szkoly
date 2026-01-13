#include <iostream>

using namespace std;

float poleTrap(float a, float b, float h){
    return ((a+b)*h)/2;
}
float poleKwad(float c, float d){
    return c*d;
}
float poleKola(float r){
    return 3.14*r*2;
}

int main()
{
    int s = 0;
    do {
        cout << "Podaj jakie pole chcesz obliczyc (1 - trapezu, 2 - kwadratu, 3 - kola):" << endl;
        cin >> s;
        if (s < 1 || s > 3){
            cout << "Podales bledna opcje" << endl;
        }
    } while (s < 1 || s > 3);

    switch(s){
        case 1:
            float a, b, h;
            cout << "Podaj kolejno a, b, h" << endl;
            cin >> a >> b >> h;
            cout << poleTrap(a, b, h);
            break;
        case 2:
            float c, d;
            cout << "Podaj kolejno a, b" << endl;
            cin >> c >> d;
            cout << poleKwad(c, d);
            break;
        case 3:
            float r;
            cout << "Podaj r" << endl;
            cin >> r;
            cout << poleKola(r);
            break;
    }
    return 0;
}
