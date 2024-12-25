#include <iostream>
using namespace std;


bool check(int a, int k);

int main() {
	setlocale(LC_ALL, "RU");
	int *a, *b, k, n, c = 0;
	cout << "¬ведите длину массива: ";
	cin >> n;
	a = new int[n];
	b = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Ёлемент " << i + 1 << ": ";
		cin >> a[i];
	}

	cout << "¬ведите цифру, на которую должны будут оканчиватьс€ элементы итогового массива: ";
	cin >> k;

	for (int i = 0; i < n; i++) {
		if (check(a[i], k)) {
			b[c] = a[i];
			c++;
		}
	}


	for (int i = 0; i < c; i++) cout << b[i] << ", ";

	return 0;
}


bool check(int a, int k) {
	if (a % 10 == k) return 1;
	else return 0;
}