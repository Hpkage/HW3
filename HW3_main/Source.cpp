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

void box(string& type, int border) {
	//
	if (border < 1) {
		border = 1;
	}
	//top-bottom layer creater
	for (int i = 0; i < 2 * border + 1; i++) {
		//side layer creater
		for (int j = 0; j < 2 + type.size() + 2 * border; j++) {
			//placement of text
			if (i == border) {
				for (int k = 0; k < border; k++) {
					cout << "*";

				}
				cout << " " << type << " ";
				for (int k = 0; k < border; k++) {
					cout << "*";
				}
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
	int border;
	cout << "Type in a number: ";
	cin >> border;
	cout << endl;
	box(type, border);
}