//BoxPrint Hiromi Kageyama Sept. 23, 2020
//write a c++ program that creates a box made of * surrounding
//what the user types in

#include <iostream>
#include <string>
#include <vector>
#include "Boxer.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	while (true) {
		string type;
		cout << "Type something in (Press Q to quit): ";
		cin >> type;
		if (type == "Q") {
			break;
		}
		int border;
		cout << "Type in a number: ";
		cin >> border;
		if (border < 1) {
			cout << endl;
			cout << "Error type a Positive number: " << endl;
			continue;
		}
		cout << endl;
		box(type, border);
	}
	return 0;
}