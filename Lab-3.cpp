#include <iostream>
#include <cmath>
using namespace std;


char notes(int num);

int main() {
	setlocale(LC_ALL, "RU");
	int num;
	cout << "������� ����� ����: ";
	cin >> num;
	notes(num);

	return 0;
}



char notes(int num) {
	int num_7 = num % 7 - 1;

	switch(num_7)
	{
		case 0:
			cout << "��";
			break;
		case 1:
			cout << "��";
			break;
		case 2:
			cout << "��";
			break;
		case 3:
			cout << "��";
			break;
		case 4:
			cout << "����";
			break;
		case 5:
			cout << "��";
			break;
		case 6:
			cout << "��";
			break;

		default:
			cout << "������� ������������ ��������";
	}


	return 0;
}