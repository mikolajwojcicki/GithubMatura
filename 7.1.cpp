#include "config.h"
#ifdef E71
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void zadania::e71()
{
	ifstream dane("szyfrogram.txt");
	ofstream output("zadanie7_1.txt");
	vector<int> tempting;
	for (int i = 0;i < 26;i++) {
		tempting.push_back(0);
	};
	char temp;
	while (dane >> temp) {
		for (int i = 'A';i <= 'Z';i++) {
			if (temp == i) {
				tempting[i - 'A']++;
			}
		};
	};
	for (int i = 0;i < 26;i++) {
		char temp2 = i + 'A';
		cout << temp2 << " " << tempting[i] << endl;
	}
}
#endif