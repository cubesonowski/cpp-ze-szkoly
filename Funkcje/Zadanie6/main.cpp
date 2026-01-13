#include <iostream>

using namespace std;

double potega(double x, double n){
    if (n == 0){
        return 1;
    } else {
        int i = 0, pom = 1, a;
        while (i < n){
            a = pom*x;
            pom = a;
            i++;
        }
        return a;
    }
}

int main()
{
    cout << potega(3, 6);
    return 0;
}
