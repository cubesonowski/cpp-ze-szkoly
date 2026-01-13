#include <iostream>

/*Specyfikacja algorytmu
Dane:
n nieumena liczba calkowita

Wynik:
ciag(n) wartosc n-tego elementu ciagu

Lista kroków:
Zak³adam, ¿e wartoœæ n zosta³a wczytana
Jeœli n=0 to ci¹g = 0
Jeœli n=1 to ci¹g = 1
Jeœli n>1 to ci¹g = ci¹g(n-1) + ci¹g(n-2)
*/

using namespace std;

void fibonacci_it(int n){
    double x = 0, y = 1;
    cout << x << " ";
    for (int i = 0; i < n; i++){
        cout << y << " ";
        y = x + y;
        x = y - x;
    }
}

double fibonacci(int n){
    if (n==0){
        return 0;
    } else if (n==1) {
        return 1;
    } else if (n>1){
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    /*
    for (int i = 0; i <= n; i++) {
        cout << fibonacci(i) << " ";
    }
    */
    cout << endl;
    fibonacci_it(n);
    return 0;
}
