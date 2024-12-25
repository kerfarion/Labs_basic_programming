#include <iostream>
#include <cstdlib>
using namespace std;


float sum(int* matrix[], int n, int m);

int main() {
	setlocale(LC_ALL, "RU");
	int** a;
	int m, n, res_n, res_m;
	float avg;

	cout << "Введите количество строк и столбцов матрицы через пробел: ";
	cin >> n;
	cin >> m;

	a = new int*[n];
	for (int i = 0; i < n; i++) {
		a[i] = new int[m];
	}


	for (int i = 0; i < n; i++) {
		cout << "Строка " << i + 1 << "(" << m << " элементов): ";
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	res_n = 0;
	res_m = 0;
	avg = sum(a, n, m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (abs(avg - a[i][j]) < abs(avg - a[res_n][res_m])) {
				res_n = i;
				res_m = j;
			}
		}
	}

	cout << avg << " " << a[res_n][res_m];

	return 0;
}


float sum(int *matrix[], int n, int m) {
	int suma = 0, count = m * n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			suma += matrix[i][j];
		}
	}

	return float(suma) / count;
}