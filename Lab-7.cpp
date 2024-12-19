#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	const int n = 128;
	int c, i, min;
	cout << "Введите длину массива(до 128): ";
	cin >> c;
	if (c > 127) {
		cout << "Введено некорректное значение";
		return 1;
	}
	int a[n];

	for (i = 0; i < c; i++) {
		cout << "Введите элемент массива: ";
		cin >> a[i];
	}
	
	//Хоть в условии сказано "всех четных номеров" в примере инлексы начинаются с 2, а нне с 0, поэтому я так же начну с A_2

	min = a[2];
	for (i = 2; i < c - 1; i += 2) {
		if (a[i] < min) min = a[i];
	}
	cout << "\n Минимальный элемент массива с чётным номером: " << min;
	return 0;
}
