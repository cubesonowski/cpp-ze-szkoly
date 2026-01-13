#include <iostream>

using namespace std;

int main() {
    int wys;
    cin >> wys;
    for (int i = 1; i <= wys; i++){
        for (int j = 0; j < wys-i; j++) {
            cout << " ";
        }
        for (int j = 0; j < (2*i)-1; j++){
            if (j == 0 or j+1 == (2*i)-1 or i==wys){
                cout << "*";
            } else {
                cout << " ";
            } 
        }
        cout << endl;
    }
    return 0;
}