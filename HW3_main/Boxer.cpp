#include <iostream>
#include <string>
#include "Boxer.h"

using std::cout;
using std::cin;
using std::endl;
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