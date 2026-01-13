#include <iostream>

using namespace std;

void wieza_hanoi(int n, char a, char b, char c){
    if (n == 1){
        cout << a << "->" << c << endl;
    } else {
        wieza_hanoi(n-1, a, c, b);
        cout << a << "->" << c << endl;
        wieza_hanoi(n-1, b, a, c);
    }
}


int main() {
    int ile;
    cout << "Ile dyskow" << endl;
    cin >> ile;
    wieza_hanoi(ile,'A','B','C');
    return 0;
}
