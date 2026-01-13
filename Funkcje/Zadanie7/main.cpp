#include <iostream>

using namespace std;

double iloraz(int a, int b){
    if (a < b){
        return b / a;
    } else {
        return a / b;
    }
}

int main()
{
    cout << iloraz(2, 5);
    return 0;
}
