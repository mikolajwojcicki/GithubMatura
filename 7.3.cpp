#include "config.h"
#ifdef E73
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void zadania::e73()
{
	ifstream dane("szyfrogram.txt");
	ifstream dane2("klucz.txt");
	ofstream decoded("decoded.txt");
	vector<int> klucz;
	char temp;
	while (dane2 >> temp) {
		klucz.push_back(temp);
	};
	while (dane >> temp) {
		for (int i = 0;i < 26;i++) {
			char out_temp;
			if (temp == klucz[i]) {
				out_temp = i + 'A';
				decoded << out_temp;
				break;
			}
		}
	}

}
#endif