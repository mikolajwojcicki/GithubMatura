#include "config.h"
#ifdef E6
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void zadania::e6()
{
	ifstream dane;
	dane.open("dane6.txt");
	string temp;
	int wynik[11] = { 0,0,0,0,0,0,0,0,0,0 };
	while (getline(dane, temp)) {
		bool term1 = true;
		int term2 = 0;
		bool term3[11];
		for (int p = 2;p <= 10;p++) {
			term1 = true;
			term2 = 0;
			term3[p] = false;
			for (int i = 0;i < temp.size();i++) {
				int temp1 = temp[i] - '0';
				if (temp1 == p - 1) {
					term2++;
				}
				if (temp1 > p - 1) {
					term1 = false;
				}
			};
			if (term1 == true && term2 > 0) {
				term3[p] = true;
			};
		};
		for (int p = 2;p <= 10;p++) {
			if (term3[p] == true) {
				wynik[p]++;
			};
		};
	};
	for (int p = 2;p <= 10;p++) {
		cout << p << ":" << wynik[p] << endl;
	};
}
#endif