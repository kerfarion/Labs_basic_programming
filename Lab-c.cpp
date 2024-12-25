#include <iostream>
using namespace std;


void sum(int* matrix[], int n, int m);

int main() {
	setlocale(LC_ALL, "RU");
	int** a;
	int n, m;

	cout << "Введите количество строк и столбцов матрицы через пробел: ";
	cin >> n;
	cin >> m;

	a = new int* [n];
	for (int i = 0; i < n; i++) {
		a[i] = new int[m];
	}

	for (int i = 0; i < n; i++) {
		cout << "Строка " << i + 1 << "(" << m << " элементов): ";
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	sum(a, n, m);

	return 0;
}


void sum(int* matrix[], int n, int m) {
	int* suma;
	suma = new int[n];
	for (int i = 0; i < n; i++) {
		suma[i] = 0;
		for (int j = 0; j < m; j += 2) {
			suma[i] += matrix[i][j];
		}
	}

	for (int i = 0; i < n; i++) cout << suma[i] << "\n";
}