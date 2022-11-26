#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream dane;
    dane.open("dane3.txt");
    int p1 = 0;
    int p2 = 0;
    int t_d = 0;
    int n_d = 10000;
    int n2_d = 100000;
    while (dane >> p1) {
        dane >> p2;
        t_d = p2 - p1 + 1;
        if (t_d < n_d) {
            n2_d = n_d;
            n_d = t_d;
        }
        else if (t_d>n_d&&t_d<n2_d) {
            n2_d = t_d;
        }
    }
    cout << n_d << " " << n2_d;
}