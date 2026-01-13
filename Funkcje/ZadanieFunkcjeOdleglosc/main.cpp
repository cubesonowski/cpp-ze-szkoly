#include <iostream>

using namespace std;

float module(float x){
    if (x>=0){
        return x;
    } else {
        return -x;
    }
}

int main()
{
    float a, b;
    cout << "Podaj a: " << endl;
    cin >> a;
    cout << "Podaj b: " << endl;
    cin >> b;

    cout << module(a - b) << endl;

    return 0;
}
