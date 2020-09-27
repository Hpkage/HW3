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

	double x1, x2;
	x1 = (-b + sqrt((b * b) - 4 * a * b)) / (2 * a);
	x2 = (-b - sqrt((b * b) - 4 * a * b)) / (2 * a);

	cout << "X = " << x1 << " and or X = " << x2 << endl;

	return 0;
}