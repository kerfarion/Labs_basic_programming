#include <iostream>
#include <cmath>
using namespace std;


char notes(int num);

int main() {
	setlocale(LC_ALL, "RU");
	int num;
	cout << "Введите номер ноты: ";
	cin >> num;
	notes(num);

	return 0;
}



char notes(int num) {
	int num_7 = num % 7 - 1;

	switch(num_7)
	{
		case 0:
			cout << "До";
			break;
		case 1:
			cout << "Ре";
			break;
		case 2:
			cout << "Ми";
			break;
		case 3:
			cout << "Фа";
			break;
		case 4:
			cout << "Соль";
			break;
		case 5:
			cout << "Ля";
			break;
		case 6:
			cout << "Си";
			break;

		default:
			cout << "Введено некорректное значение";
	}


	return 0;
}