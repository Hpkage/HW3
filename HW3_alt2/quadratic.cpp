// quadratic.cpp Hiromi Kageyama Sept. 26, 2020
// Write a c++ program that solves the quadratic formula

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::sqrt;

int main() {
	double a, b, c;
	cout << "Enter the coefficient of a then b then c: ";
	cin >> a >> b >> c;

	if (a == 0) {
		cout << "UNDEFINED." << endl;
		return 1;
	}
	return 0;
}