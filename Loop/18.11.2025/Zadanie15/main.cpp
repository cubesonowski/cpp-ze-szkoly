#include <iostream>

using namespace std;

int nwd(int a, int b){
    while (b != 0){
        int pom = b;
        b = a%b;
        a = pom;
    }
    return a;
}

int main() {
    int m = 4;
    for (int a = 2; a <= m; a++){
        for (int b = 1; b < a; b++){
            if (nwd(a, b) == 1){
                cout << b << "/" << a << endl;
            }
        }
    }
}