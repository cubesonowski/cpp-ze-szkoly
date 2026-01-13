#include <iostream>

using namespace std;

int main() {
    int n; 
    int sum = 0;
    int pom = 0;
    int jajo = 0;
    int pom2 = 1;
    do {
        cin >> n;
        sum += n;
        if (n < 0){
            pom++;
        }
        if (jajo == n){
            pom2++;
        }
        jajo = n;
    } while (sum < 100 and pom < 5 and pom2 != 2);
    return 0;
}