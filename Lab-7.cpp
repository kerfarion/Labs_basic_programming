#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	const int n = 128;
	int c, i, min;
	cout << "������� ����� �������(�� 128): ";
	cin >> c;
	if (c > 127) {
		cout << "������� ������������ ��������";
		return 1;
	}
	int a[n];

	for (i = 0; i < c; i++) {
		cout << "������� ������� �������: ";
		cin >> a[i];
	}
	
	//���� � ������� ������� "���� ������ �������" � ������� ������� ���������� � 2, � ��� � 0, ������� � ��� �� ����� � A_2

	min = a[2];
	for (i = 2; i < c - 1; i += 2) {
		if (a[i] < min) min = a[i];
	}
	cout << "\n ����������� ������� ������� � ������ �������: " << min;
	return 0;
}
