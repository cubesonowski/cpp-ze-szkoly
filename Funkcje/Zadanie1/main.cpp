#include <iostream>

using namespace std;

float poleTroj(float a, float h) {
    return 0.5*a*h;
}

int main()
{
    cout << poleTroj(4, 6);
    return 0;
}
