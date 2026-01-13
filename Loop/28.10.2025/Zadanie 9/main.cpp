#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Podaj wysokosc trojkata:";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++){
        int j = 1;
        while (j <= i){
            cout << "*";
            j++;
        }
        cout << endl;
    }
}
