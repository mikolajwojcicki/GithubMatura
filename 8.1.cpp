#include "config.h"
#ifdef E81
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void zadania::e81()
{
	ifstream dane("dane8.txt");
	int t, p, n;
	t = p = n = 0;
	vector<int> dane_dane;
	
	while (dane >> t) {
		dane_dane.push_back(t);
	};
	for (int i = 1;i < dane_dane.size();i++) {
		int temp = abs(dane_dane[i] - dane_dane[i - 1]);
		if (temp % 2 == 0) {
			p++;
		}
		else {
			n++;
		}
	}
	cout << "Parzystych: " << p << endl;
	cout << "Nieparzystych: " << n << endl;
}
#endif