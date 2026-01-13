#include <iostream>

using namespace std;

//Wzór ogólny B=A*x
//referencja int jajo(&a), wartosc int koko(a)

void rownanie(float a, float b){
    if (a!=0){
        cout << "Rownanie ma jedno rozwiazanie: " << b/a;
    } else if (a == 0 && b == 0){
        cout << "Rownanie ma nieskonczenie wiele rozwiazan";
    } else {
        cout << "Rozwiazanie nie ma rozwiazan";
    }
}

int main() {
    float a, b;
    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;
    rownanie(a,b);
    return 0;
}
