// Source.cpp Hiromi Kageyama Sept. 26, 2020
// Write a c++ program that follows the Collatz sequence

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void Collatz(int n) {
	// if n != 1, continue running
	while (n != 1) {
		cout << n << " ";

		// if n is odd
		if (n & 1) {
			n = n * 3 + 1;
		}
		// if n is even
		else {
			n = n / 2;
		}
	}
	cout << n;

	return;
}

int main() {
	cout << "Type in a positive integer: ";
	int n;
	cin >> n;
	Collatz(n);

	return 0;
}