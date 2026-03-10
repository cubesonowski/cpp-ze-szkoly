#include <iostream>
#include <fstream>
#include <list>

using namespace std;

int NWD(int a, int b) {
    int r = a%b;
    while (r != 0) {
        a = b;
        b = r;
        r = a%b;
    }
    return b;
}

int main() {
    ifstream in;
    ofstream out;
    in.open("liczby.txt");
    out.open("wyniki.txt");

    int liczba, tablica[200], i = 0, j = 0;
    list<int> wzgledniePierwsze;
    while(!in.eof()){
        in >> liczba;
        tablica[i] = liczba;
        ++i;
    }
    i = 0;
    while (i < 200) {
        while (j < 200) {
            if (NWD(tablica[i], tablica[j]) == 1) {
                wzgledniePierwsze.push_front(tablica[i]);
            }
            ++j;
        }
        ++i;
        j = 0;
    }
    wzgledniePierwsze.sort();
    out << wzgledniePierwsze.back();
    out.close();
    in.close();
}
