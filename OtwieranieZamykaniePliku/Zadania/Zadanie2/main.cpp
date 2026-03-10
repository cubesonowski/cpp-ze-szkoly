#include <iostream>
#include <fstream>
#include <list>

using namespace std;

int main() {
    ifstream in;
    ofstream out;
    in.open("liczby.txt");
    out.open("wynik.txt");

    int liczba;
    list<int> listaDzielnikow;

    while(!in.eof()){
        in >> liczba;
        for (int i = 1; i <= liczba; ++i) {
            if (liczba % i == 0) {
                listaDzielnikow.push_back(i);
            }
        }
    
        if (listaDzielnikow.size() == 18) {
            out << liczba << " - dzielniki ";
            for (int iter : listaDzielnikow) {
                out << iter << " ";
            }
            out << "\n";
        }
        while (!listaDzielnikow.empty()) {
            listaDzielnikow.pop_front();
        }
    }
    in.close();
    out.close();
}
