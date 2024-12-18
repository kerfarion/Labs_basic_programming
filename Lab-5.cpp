#include <iostream>

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int sum = 0, i = 100;
	while (i <= 200) {
		if (i % 17 == 0) {
			sum += i;
			i += 1;
		}
		else i++;
	}
	cout << "Сумма всех чисел кратных 17 = " << sum;

	return 0;
}