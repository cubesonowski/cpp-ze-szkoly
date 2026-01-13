#include <iostream>

using namespace std;

int main()
{
    /*
    i++
    i--
    x=licznik++
    x=++licznik

    int x, licznik;
    licznik = 5;
    x=licznik++;
    cout<<x<<" "<<licznik<<endl; //najpierw przypisuje licznik do x i do licznika dodaje 1
    x=++licznik;
    cout<<x<<" "<<licznik<<endl; //najpierw dodaje 1 do x i przypisuje do licznika
    return 0;

    for (int i = 0; i<=20; i++){
        if (i%3==0){
            cout << i << endl;
        } else {
            cout << i << " - Nie podzielna przez 3" << endl;
        }
    }

    char znak;

    while(znak!='k' && znak!='K'){
        cout << "Podaj znak: ";
        cin >> znak;
        cout << znak << endl;
    }

    int a, b, licznik;
    cout << "Podaj a: ";
    cin >> a;

    cout << "Podaj b: ";
    cin >> b;

    while (a>=b){
        a = a-b;
        licznik++;
    }

    cout << "Wynik a/b = " << licznik;
    */

    char znak;

    do {
        cout<<"Podaj znak: ";
        cin>>znak;
        cout<<znak<<endl;
    } while(znak!='k');

    return 0;
}
