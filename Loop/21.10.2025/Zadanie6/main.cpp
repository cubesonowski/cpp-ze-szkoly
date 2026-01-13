#include <iostream>

using namespace std;

int main()
{
    /*
        *
       * *
      *   *
     *     *
    *********
    */
    int h;
    cout << "Podaj wysokosc trojkata: ";
    cin >> h;
    for (int c = 0; c < h; c++){
        for (int i = 0; i < h-c-1; i++){
            cout << " ";
        }
        if (c == 0){
            cout << "*";
        } else if (c == h-1){
            for (int i = 0; i < 2*h-1; i++){
                cout << "*";
            }
        } else {
            cout << "*";
            for (int j = 0; j < 2*c-1; j++){
                cout << " ";
            }
            cout << "*";
        }
        for (int i = 0; i < h-c-1; i++){
            cout << " ";
        }
        cout << endl;
    }
}
