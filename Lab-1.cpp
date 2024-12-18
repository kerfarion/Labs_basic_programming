// 15 задание
# include <iostream>
# include <cmath>
using namespace std;

int funk_a(int a, int b, int c, int s);
int funk_b(int a, int b, int c);

int main() {
	setlocale(LC_ALL, "RU");
	int a, b, c, s;
	int variant;
	cout << "Введите вариант(1 или 2): ";
	cin >> variant;
	if (variant == 1) {
		cout << "Введите 1 сторону треугольника: ";
		cin >> a;
		cout << "Введите 2 сторону треугольника: ";
		cin >> b;
		cout << "Введите 3 сторону треугольника: ";
		cin >> c;
		cout << "Введите площадь треугольника: ";
		cin >> s;
		funk_a(a, b, c, s);
	}
	else if (variant == 2) {
		cout << "Введите катет треугольника: ";
		cin >> a;
		cout << "Введите катет треугольника: ";
		cin >> b;
		cout << "Введите гипотенузу треугольника: ";
		cin >> c;
		funk_b(a, b, c);
	}

	return 0;
}

int funk_a(int a, int b, int c, int s) { 
	float r = float(2 * s) / (a + b + c);
	float r_big = float(a * b * c) / (4 * s);

	cout << "Радиус вписанной окружности: " << round(r * 100)/100.0 << "\n";
	cout << "Радиус описанной окружности: " << round(r_big * 100) / 100.0;
	
	return 0;
}


int funk_b(int a, int b, int c) {
	float r = (a + b - c) / 2.0;
	float r_big = c / 2.0;

	cout << "Радиус вписанной окружности: " << round(r * 100) / 100.0 << "\n";
	cout << "Радиус описанной окружности: " << round(r_big * 100) / 100.0;

	return 0; 
}
