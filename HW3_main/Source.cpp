//BoxPrint Hiromi Kageyama Sept. 23, 2020
//write a c++ program that creates a box made of * surrounding
//what the user types in

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

void box(string& type) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4 + type.size(); j++) {
			if (i == 1) {
				cout << "* " << type << " *";
				break; 
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
	return;
}

int main() {
	string type;
	cout << "Type something in: ";
	cin >> type;
	cout << endl;
	box(type);
}