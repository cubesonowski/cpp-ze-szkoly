#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Podaj numer miesiaca (1-12)" << endl;
    cin >> x;
    switch(x){
        case 1: cout << "Styczen - ma 31 dni"; break;
        case 2:
            int rok;
            cout << "Podaj rok: " << endl;
            cin >> rok;
            if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 4 == 0 && rok % 400 == 0)){
                cout << "Luty - ma 29 dni" << endl; break;
            } else {
                cout << "Luty - ma 28 dni" << endl; break;
            }
        case 3: cout << "Marzec - ma 31 dni"; break;
        case 4: cout << "Kwiecien - ma 30 dni"; break;
        case 5: cout << "Maj - ma 31 dni"; break;
        case 6: cout << "Czerwiec - ma 30 dni"; break;
        case 7: cout << "Lipiec - ma 31 dni"; break;
        case 8: cout << "Sierpien - ma 31 dni"; break;
        case 9: cout << "Wrzesien - ma 30 dni"; break;
        case 10: cout << "Pazdziernik - ma 31 dni"; break;
        case 11: cout << "Listopad - ma 30 dni"; break;
        case 12: cout << "Grudzien - ma 31 dni"; break;
        default: cout << "Podales zly numer miesiaca"; break;
    }

    return 0;
}
