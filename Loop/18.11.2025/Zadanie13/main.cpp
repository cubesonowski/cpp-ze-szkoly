#include <iostream>

/*
 * Napisz program rysujący literę A o rozmiarze N, gdzie N to dowolna naturalna liczba parzysta nie większa niż 20. Przykładowe literki do wykonania programu:
 */

using namespace std;

void literaA(int n){
	int a = 0;
	for (int i = 0; i<n; i++){
		for (int j = 0; j<n-i-1; j++){
			cout << " ";
		}
		if (i == 0){
			cout << "*";
		} else if (i == 1){
			for (int j = 0; j < i+2; j++){
				cout << "*";
			}
		} else if (i == n/2+1) {
			for (int j = 0; j < n+3; j++){
				cout << "*";
			}
		} else {
			cout << "*";
			for (int j = 0; j < 2 * (i - 1); j++){
				cout << " ";
			}
			cout << "**";
		}
		cout << endl;
	}
}

int main(){
	int n;

	do {
		cout << "Podaj liczbe" << endl;
		cin >> n;
	} while(n > 20 || n < 0 || n%2 != 0);

	literaA(n);

	return 0;
}
