#include <iostream>
using namespace std;

bool f(bool a, bool b);

int main() {
	setlocale(LC_ALL, "RU");
	float a, b;
	cout << "¬ведите первую логическую переменную: ";
	cin >> a;
	cout << "¬ведите первую логическую переменную: ";
	cin >> b;
	cout << "а: " << a << ", b: " << b << ", a XOR b = " << f(a, b);
	return 0;
}

bool f(bool a, bool b) {
	return !(a == b);
}