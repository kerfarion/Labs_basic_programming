#include <iostream>
using namespace std;


void bubble_sort(int lis[], int len);

int main() {

	setlocale(LC_ALL, "RU");
	int* a;
	int d, n, j = 1;

	cout << "������� ����� �������: ";
	cin >> n;

	a = new int[n + 1];

	for (int i = 0; i < n; i++) {
		cout << "������� " << i + 1 << ": ";
		cin >> a[i];
	}

	bubble_sort(a, n);
	cout << "��� ��������������� ������: ";
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;


	cout << "������� �����, ������� ����� ���������� � ������: ";
	cin >> d;

	//a[n] = d;
	//bubble_sort(a, n + 1);

	//cout << "��� ��������������� ������ � ����������� ����������: ";
	//for (int i = 0; i < (n + 1); i++) cout << a[i] << " ";
	// ��� ���� �� ������� ������)))

	a[n] = d;
	while (a[n - j] > d and j <= n) {
		swap(a[n - j], a[n - j + 1]);
		j++;
	}

	cout << "��� ��������������� ������ � ����������� ����������: ";
	for (int i = 0; i < (n + 1); i++) cout << a[i] << " ";

	return 0;
}

void bubble_sort(int lis[], int len) {
	while (len--) {

		bool flag = false;
		for (int i = 0; i < len; i++) {
			if (lis[i] > lis[i + 1]) {
				swap(lis[i], lis[i + 1]);
				flag = true;
			}
		}
		if (flag = false) break;
	}
}