#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int sum = 0;
	for (int i = 100; i <= 200; i++) if (i % 17 == 0) sum += i;
	cout << "Сумма всех чисел кратных 17 = " << sum;

	return 0;
}