#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ifstream dane("szyfrogram.txt");
	ifstream dane2("czestosc.txt");
	ofstream output("klucz.txt");
	vector<int> tempting;
	vector<int> keying;
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
	string temp_temp;
	while (getline(dane2, temp_temp)) {
		temp_temp.erase(0, 2);
		keying.push_back(stoi(temp_temp));
	};
	for (int i = 0;i < 26;i++) {
		for (int j = 0;j < 26;j++) {
			temp = j + 'A';
			if (tempting[j] == keying[i]) {
				output << temp << endl;
				break;
			}
		}
	}
}