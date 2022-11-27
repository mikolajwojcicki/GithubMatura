#include "config.h"
#ifdef E82
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void zadania::e82()
{
	ifstream dane("dane8.txt");
	vector<int> dane_;
	int temp,nieup;
	nieup = 0;
	while (dane >> temp) {
		dane_.push_back(temp);
	};
	for (int j = (dane_.size() - 1);j >= 0;j--) {
		for (int i = (j - 1);i >= 0;i--) {
			if (dane_[i] > dane_[j]) {
				nieup++;
			}
		}
	};
	cout << nieup;
}
#endif