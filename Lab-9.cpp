#include <iostream>
#include <cmath>
using namespace std;


double rast(int x_1, int y_1, int x_2, int y_2);

int main() {
	setlocale(LC_ALL, "RU");
	int matrix[30][2];
	int i, j, n;
	float  maxim, r_mat;
	cout << "¬ведите количество точек: ";
	cin >> n;
	cout << "¬ведите координаты " << n << " точек, координаты каждой с новой строки: \n";

	for (i = 0; i < n; i++) {
		for (j = 0; j < 2; j++) cin >> matrix[i][j];
	}

	maxim = rast(matrix[0][0], matrix[0][1], matrix[1][0], matrix[1][1]);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (rast(matrix[i][0], matrix[i][1], matrix[j][0], matrix[j][1]) > maxim) maxim = rast(matrix[i][0], matrix[i][1], matrix[j][0], matrix[j][1]);
		}
	}

	cout << maxim;

	return 0;
}


double rast(int x_1, int y_1, int x_2, int y_2) {
	double ras = sqrt(pow(x_1 - x_2, 2) + pow(y_1 - y_2, 2));
	
	return round(ras*100)/100;
}