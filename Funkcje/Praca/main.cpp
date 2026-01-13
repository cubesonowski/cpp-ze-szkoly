#include <iostream>

using namespace std;

void zmiana(int &wyplata, int &staz){
    wyplata*=1.1;
    staz+=1;
}

int main() {
    int wyplata = 1000;
    int staz = 0;
    zmiana(wyplata, staz);
    cout << wyplata << endl;
    cout << staz;
    return 0;
}
