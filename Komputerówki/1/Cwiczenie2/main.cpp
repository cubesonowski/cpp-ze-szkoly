#include <iostream>

using namespace std;

int main()
{
    double x;
    cout << "Wprowadz kwote (z vat): " << endl;
    cin >> x;
    double vat = x * 0.22;
    double netto = x - vat;
    cout << "Kwota vat: " << vat << endl;
    cout << "Kwota netto: " << netto << endl;
}
