#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream in;
    ofstream out;
    in.open("liczby.txt");
    out.open("wynik.txt");

    string wiersz;
    int iter = 1, liczba;

    while(!in.eof()){
        in >> liczba;
        if (liczba < 1000) {
            out << liczba << "\n";
        } else if (iter > 198) {
            out << liczba << "\n";
        }
        ++iter;
    }
    in.close();
    out.close();
}
