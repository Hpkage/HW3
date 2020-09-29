#include <iostream>
#include <string>
#include "Boxer.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

//creates a box around what the user types in
void box(string& type, int border) {


	//top-bottom layer creater
	for (auto i = 1; i <= 2 * border + 3; i++) {

		//side layer creater
		for (auto j = 1; j <= 2 + type.size() + 2 * border; j++) {
			
			//placement of text
			if (i > border && i < border + 4) {

				if (j <= border || j > (2 + type.size() + 2 * border) - border) {
					cout << "*";
				}
				else if (i == border + 2 && j == border + 1) {
					cout << " " << type << " ";
				}
				else {
					if (i != border + 2) {
						cout << " ";
					}
				}
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
	return;
}

