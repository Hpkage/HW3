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
	string type;
	cout << "Type something in: ";
	cin >> type;
	int border;
	cout << "Type in a number: ";
	cin >> border;
	cout << endl;
	box(type, border);
}