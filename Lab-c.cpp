#include <iostream>
using namespace std;

bool f(bool a, bool b);

int main() {
	setlocale(LC_ALL, "RU");
	float a, b;
	cout << "������� ������ ���������� ����������: ";
	cin >> a;
	cout << "������� ������ ���������� ����������: ";
	cin >> b;
	cout << "�: " << a << ", b: " << b << ", a XOR b = " << f(a, b);
	return 0;
}

bool f(bool a, bool b) {
	return !(a == b);
}