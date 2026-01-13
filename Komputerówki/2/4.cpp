#include <iostream>

using namespace std;

int main() {
    int n, pom;
    cin >> n;
    pom = 1;
    for (int i = 0; i<n; i++) {
        pom *= 2;
        cout << pom << endl;
    }
}