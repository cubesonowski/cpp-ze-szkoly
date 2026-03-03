#include <iostream>
#include <fstream> // Biblioteka do obsługi plików
#include <string>

using namespace std;

int main() {
    // 1. Deklaracja i inicjalizacja zmiennych
    ifstream wej;
    ofstream wyj;
    char znak;
    string slowo, t;
    float litsuma = 0, cyfsuma = 0, bsuma = 0, linie = 1, slowlicznik = 0;

    // 2. Otwieranie plików (używaj podwójnego "\\" w ścieżkach)
    wej.open("liczby.txt"); 
    wyj.open("C:\\wyniki.txt");

    // 3. Sprawdzanie, czy plik istnieje (ważny dodatek do Twojego kodu)
    if (!wej.is_open()) return 1;

    // 4. Czytanie znak po znaku - analiza tekstu
    while (wej.get(znak)) { // Lepsze niż while(!eof)
        if (isalpha(znak)) litsuma++; // Czy litera?
        if (isdigit(znak)) cyfsuma++; // Czy cyfra?
        if (isalnum(znak)) bsuma++;   // Litera lub cyfra
        if (znak == '\n') linie++;    // Liczenie linii
    }

    // 5. Powtórne czytanie tego samego pliku (Resetowanie) 
    wej.clear();                 // Czyści flagi błędów/końca pliku
    wej.seekg(0);                // Wraca na początek pliku
    while (wej >> slowo) {       // Czytanie słowo po słowie 
        slowlicznik++;
    }

    // 6. Zapisywanie do pliku i zamykanie
    wyj << "Slow: " << slowlicznik << " Linie: " << linie << endl;
    
    wej.close();
    wyj.close();

    // 7. Input z klawiatury
    // getline(cin, t); // Wczytuje całą linię do stringa t

    return 0; // Musi być na samym końcu, po operacjach na plikach
}
