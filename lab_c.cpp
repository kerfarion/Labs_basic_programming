#include <iostream>
using namespace std;

int last_num(int n);

int main() {
	setlocale(LC_ALL, "RU");
	int num;
	cout << "¬ведите n: ";
	cin >> num;
	last_num(num);

	return 0;
}

int last_num(int num) {
	switch (num % 10)
	{
	case 0:
		cout << 0;
		break;
	case 1:
		cout << 1;
		break;
	case 2:
		cout << 4;
		break;
	case 3:
		cout << 9;
		break;
	case 4:
		cout << 6;
		break;
	case 5:
		cout << 5;
		break;
	case 6:
		cout << 6;
		break;
	case 7:
		cout << 9;
		break;
	case 8:
		cout << 4;
		break;
	case 9:
		cout << 1;
		break;

	default:
		cout << "¬ведено некорректное значение";
	}

	return 0;
}