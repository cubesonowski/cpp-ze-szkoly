#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 3; i++){
        for (int i = 1; i <= 10; i++){
            cout << i << endl;
            for (int i = 0; i < 500000000; i++){
                continue;
            }
            cout << endl;
        }
        for (int i = 10; i >= 1; i--){
            cout << i << endl;
            for (int i = 0; i < 500000000; i++){
                continue;
            }
            cout << endl;
        }
    }
}
