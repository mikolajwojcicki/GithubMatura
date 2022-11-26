#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream dane;
    dane.open("dane1_3.txt");
    const int n = 1000;
    int tablica[n];
    int p = 0;
    int i = 0;
    int suma_t = 0;
    int suma = 0;
    while (dane >> p && i<n) {
        tablica[i] = p;
        i++;
    }
    for (int j = 0;j < n;j++) {
        for (int k = (n-1);k > j;k--) {
            suma_t = 0;
            for (int h = j;h < k;h++) {
                suma_t = suma_t + tablica[h];
            };
            if (suma_t > suma) {
                suma = suma_t;
            }
        }
    }
    dane.close();
    cout << suma;
}