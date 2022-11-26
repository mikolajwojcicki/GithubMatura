#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream dane;
    dane.open("dane1_4.txt");
    const int n = 100000;
    int tablica[n];
    int p = 0;
    int i = 0;
    int suma_t = 0;
    int suma = 0;
    int x_t = 0;
    int x = 0;
    int y = 0;
    while (dane >> p && i<n) {
        tablica[i] = p;
        i++;
    }
    for (int j = 0; j < n; j++) {
        if (suma_t >= 0) {
            suma_t += tablica[j];
        }
        else {
            suma_t = tablica[j];
            x_t = j;
        }
        if (suma < suma_t) {
            suma = suma_t;
            x = x_t;
            y = j;
        }
    }
    dane.close();
    cout << suma << " " << x << " " << y;
}