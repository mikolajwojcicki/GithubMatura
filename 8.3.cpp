#include "config.h"
#ifdef E83
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void zadania::e83()
{
	ifstream dane("dane8.txt");
	vector<int> dane_;
	int length,temp,max_length;
	length = temp = max_length = 0;
	while (dane >> temp) {
		dane_.push_back(temp);
	};
	for (int i = 0;i < dane_.size();i++) {
		length = 1;
		for (int j = (i + 1);j < dane_.size();j++) {
			if (dane_[j] > dane_[i]) {
				length++;
			}
			else {
				break;
			}
		};
		if (length > max_length) {
			max_length = length;
		};
	};
	cout << max_length;
}
#endif