#include "config.h"
#ifdef E62
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void zadania::e62()
{
	ifstream dane("dane6.txt");
	ofstream output("wynik6.2.txt");
	string temp;
	vector<vector<string>> p_min;
	for (int i = 0;i < 9;i++) {
		p_min.push_back({});
	};
	/*0=2;1=3;2=4 itd*/
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
				p_min[p - 2].push_back(temp);
			};
		};
	};
	for (int i = 0;i < p_min.size();i++) {
		string temp_string_max;
		int temp_max_max = 0;
		for (int j = 0;j < p_min[i].size();j++) {
			int temp_max = 0;
			for (int k = 0;k < p_min[i][j].size();k++) {
				int temp1 = p_min[i][j][k] - '0';
				temp_max = temp_max + temp1;
			};
			if (temp_max > temp_max_max) {
				temp_max_max = temp_max;
				temp_string_max = p_min[i][j];
			};
		};
		cout << i + 2 << ":" << temp_string_max << endl;
		output << i + 2 << ":" << temp_string_max << endl;
	}
};
#endif