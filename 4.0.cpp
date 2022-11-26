#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream dane;
	dane.open("dane4.txt");
	int i_max = 0;
	int p = 0;
	int par_temp = 0;
	int par_max = 0;
	vector<int> tablica;
	while (dane >> p) {
		tablica.push_back(p);
	};
	for (int i = 0; i < 2023; i++) {
		par_temp = 0;
		for (int j = 0;j < i;j++) {
			if (tablica[i] > tablica[j]) {
				par_temp++;
			};
		};
		if (par_temp > par_max) {
			par_max = par_temp;
			i_max = i;
		};
	};
	cout << i_max+1;
}