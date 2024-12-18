#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int n, i = 0;
	float s;
	cout << "¬ведите сумму вклада: ";
	cin >> s;
	cout << "¬ведите количество лет: ";
	cin >> n;
	do
	{
		s += s * 0.03;
		i += 1;
	} 
	while (i < n);

	cout << "—умма вклада через " << n << " лет будет такой: " << round(s * 100) / 100;

	return 0;
}