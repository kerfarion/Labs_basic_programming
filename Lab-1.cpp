// 15 �������
# include <iostream>
# include <cmath>
using namespace std;

int funk_a(int a, int b, int c, int s);
int funk_b(int a, int b, int c);

int main() {
	setlocale(LC_ALL, "RU");
	int a, b, c, s;
	int variant;
	cout << "������� �������(1 ��� 2): ";
	cin >> variant;
	if (variant == 1) {
		cout << "������� 1 ������� ������������: ";
		cin >> a;
		cout << "������� 2 ������� ������������: ";
		cin >> b;
		cout << "������� 3 ������� ������������: ";
		cin >> c;
		cout << "������� ������� ������������: ";
		cin >> s;
		funk_a(a, b, c, s);
	}
	else if (variant == 2) {
		cout << "������� ����� ������������: ";
		cin >> a;
		cout << "������� ����� ������������: ";
		cin >> b;
		cout << "������� ���������� ������������: ";
		cin >> c;
		funk_b(a, b, c);
	}

	return 0;
}

int funk_a(int a, int b, int c, int s) { 
	float r = float(2 * s) / (a + b + c);
	float r_big = float(a * b * c) / (4 * s);

	cout << "������ ��������� ����������: " << round(r * 100)/100.0 << "\n";
	cout << "������ ��������� ����������: " << round(r_big * 100) / 100.0;
	
	return 0;
}


int funk_b(int a, int b, int c) {
	float r = (a + b - c) / 2.0;
	float r_big = c / 2.0;

	cout << "������ ��������� ����������: " << round(r * 100) / 100.0 << "\n";
	cout << "������ ��������� ����������: " << round(r_big * 100) / 100.0;

	return 0; 
}
