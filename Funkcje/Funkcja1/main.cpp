#include <iostream>

using namespace std;

//nie uzywac zmiennych globalnych w funkcjach
float sredniaAryt(float a, float b){
    return (a+b)/2;
}

int Oblicz(){
    int zm1 = 6;
    zm1+=5;
    zm1++;
    return zm1;
}

void Imie(){
    string imie;
    cout << "Podaj imie" << endl;
    cin >> imie;
    cout << "Twoje imie " << imie;
}

void Imie2(string imie){
    cout << imie;
}

int main(){
    float a, b;
    cout << "Daj liczby: " << endl;
    cin >> a >> b;
    cout << "Srednia arytmetyczna = " << sredniaAryt(a, b) << endl;
    if (Oblicz() > 20){
        cout << "jajco";
    } else {
        cout << "andrzej";
    }
    cout << endl;
    Imie();
    string imie;
    cout << "Wpisz swoje imie";
    cout << endl;
    cin >> imie;
    Imie2(imie);
    return 0;
}
