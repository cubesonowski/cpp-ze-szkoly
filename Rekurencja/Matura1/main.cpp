#include <iostream>

using namespace std;

int licz(int x){
    if (x == 1){
        return 1;
    } else {
        int w = licz(x/2);
        if (x%2 == 1){
            cout << "wywolanie" << endl;
            return w+1;
        } else {
            cout << "wywolanie" << endl;
            return w-1;
        }
    }
}

int main()
{
    while(true){
        int x;
        cin >> x;
        cout << licz(x) << endl;
        /*
        Zad.2.1
        11 - 2
        13 - 2
        21 - 1
        32 - -4

        Zad2.3 licz(135) - to jest odpowiedz 135
        for (int i = 135; i < 200; i++){
            cout << licz(i) << " ";
        }
        return 0;
        Zad2.2
        b) x = 2^k-1, bo licz(x/2) -> 4 wywolania przy 13, a k = 4, wiec tak samo bedzie jak x = 8 bedzie takie samo k
        */
    }
}
