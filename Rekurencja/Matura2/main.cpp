#include <iostream>
#include <string>

using namespace std;

void pisz(string s, int n, int k){
    if (s.length() == n){
        cout << s << endl;
    } else {
        for (int i = 0; i < k; i++){
            cout << s << n << k << endl;
            pisz(s + to_string(i), n, k);
        }
    }
}

int main() {
    pisz("", 2, 2);
}

/*

Zad. 2,1
a)
pisz("10", 2, 2)
pisz("11", 2, 2)
b)
2. pisz("0",2,2)
3. pisz("00",2,2)
4. pisz("01",2,2)
5. pisz("1",2,2)
6. pisz("10",2,2)
7. pisz("11",2,2)
*/