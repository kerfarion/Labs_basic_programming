#include <iostream>
#include <cmath>
using namespace std;


int multi_vector(int x_1, int y_1, int x_2, int y_2);


int main() {
	setlocale(LC_ALL, "RU");
	int x_1, y_1, x_2, y_2;
	cout << "Введите координаты первого вектора: \n";
	cin >> x_1;
	cin >> y_1;
	cout << "Введите координаты второго вектора: \n";
	cin >> x_2;
	cin >> y_2;
	multi_vector(x_1, y_1, x_2, y_2);

	return 0;
}


int multi_vector(int x_1, int y_1, int x_2, int y_2) {
	int multiply = x_1 * x_2 + y_1 * y_2;
	cout << "Произведение векторов равно: " << multiply;

	return 0;
}