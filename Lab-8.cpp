#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int matrix[128][128];
	int resp_list[128 * 128];
	int m, n, i, j, c = 0, count = 0, min = 0;
	bool flag;
	cout << "Введите длину и ширину матрицы через пробел: ";
	cin >> m;
	cin >> n;
	cout << "Введите " << n << " строк\n";
	cout << "По " << m << " элемента\n";
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) cin >> matrix[i][j];
	}

	
	for (i = 0; i < n; i++) {
		flag = 1;
// Ищу строки отсортированные по убыванию
		for (j = 1; j < m; j++) {
			if (matrix[i][j] < matrix[i][j - 1]) continue;
			else {
				flag = 0;
				break;
			}
		}
// Если строка не отсортированна по убыванию, проверяю сортировку по возрастанию
		if (flag == 0) {
			for (j = 1; j < m; j++) {
				if (matrix[i][j] > matrix[i][j - 1]) {
					flag = 1;
					continue;
				}
				else {
					flag = 0;
					break;
				}
			}
// Если флаг остался 1, то эта строка точно отсортированна или по возрастанию или по убыванию
		}
		if (flag == 1) {
			for (j = 0, c; j < m; j++, c++) resp_list[c] = matrix[i][j];
			count += 1;
		}

// Выводим минмальный элемент списка
	}
	if (count == 0) cout << 0;
	else {
		min = resp_list[0];
		for (i = 1; i < c; i++) if (min > resp_list[i]) min = resp_list[i];
		cout << "Минимальный элемент равен: " << min;
	}

	return 0;
}