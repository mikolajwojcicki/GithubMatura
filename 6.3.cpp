#include "config.h"
#ifdef E63
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void zadania::e63()
{
	ifstream dane("dane6.txt");
	ofstream output("zadanie6_3.txt");
	string temp;
	vector<string> outputing;
	while (getline(dane, temp)) {
		bool temp_b = true;
		int n = temp.length();
		int integered = temp[n] - '0';
		if (integered % 2 != 0) {
			temp_b = false;
		}
		if (integered % 2 != 0) {
			temp_b = false;
		}
		for (int i = 0; i < (n / 2); i++) {
			if (temp[i] == temp[n - i - 1]) {
				temp_b = false;
			}
		};
		if (temp_b == true) {
			outputing.push_back(temp);
		};
	};
	int palin = outputing.size();
	for (int i = 0;i < palin;i++) {
		cout << outputing[i] << endl;
	};
	cout << palin;
}
#endif