#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int n, i = 0;
	float s;
	cout << "������� ����� ������: ";
	cin >> s;
	cout << "������� ���������� ���: ";
	cin >> n;
	do
	{
		s += s * 0.03;
		i += 1;
	} 
	while (i < n);

	cout << "����� ������ ����� " << n << " ��� ����� �����: " << round(s * 100) / 100;

	return 0;
}