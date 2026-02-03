#include <iostream>

using namespace std;

    const int n = 10;
    int t[n];
    //od 0 do n-1
    void A(){
        cout << "A" << endl;
        for (int i = 0; i < n; ++i){
            t[i] = i;
            cout << t[i] << endl;
        }
    }

    //od 7 do n+6
    void B(){
        cout << "B" << endl;
        for (int i = 7; i < n+7; ++i){
            t[i-7] = i;
            cout << t[i-7] << endl;
        }
    }

    //ci¹giem 4, 8, 12, 16, ...
    void C(){
        cout << "C" << endl;
        int pom = 4;
        for (int i = 0; i < n; ++i){
            t[i] = pom;
            cout << t[i] << endl;
            pom += 4;
        }
    }

    //ci¹giem 1, 2, 4, 8, 16, ...
    void D(){
        cout << "D" << endl;
        int pom = 1;
        for (int i = 0; i < n; ++i){
            t[i] = pom;
            cout << t[i] << endl;
            pom += pom;
        }
    }

    //2,3,4,....,n+1
    void E(){
        cout << "E" << endl;
        int pom = n+1, j = n-1;
        for (int i = 0; i < n; ++i){
            t[i] = pom - j;
            cout << t[i] << endl;
            --j;
        }
    }

int main()
{
    A();
    B();
    C();
    D();
    E();
}
