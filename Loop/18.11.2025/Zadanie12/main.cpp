#include <iostream>

using namespace std;

int main()
{
    int wymiar;

    cout << "Podaj wymiar choinki: " << endl;
    cin >> wymiar;

    for (int i = 1; i < wymiar; i++){
        for (int j = 0; j < wymiar-i-1; j++){
            cout << " ";
        }
        for (int k = 0; k < i*2-1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int z = 0; z < ((wymiar-1)*2-1)/2 ; z++) {
        cout << " ";
    }
    cout << "#";
}
