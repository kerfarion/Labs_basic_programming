#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int matrix[128][128];
	int resp_list[128 * 128];
	int m, n, i, j, c = 0, count = 0, min = 0;
	bool flag;
	cout << "������� ����� � ������ ������� ����� ������: ";
	cin >> m;
	cin >> n;
	cout << "������� " << n << " �����\n";
	cout << "�� " << m << " ��������\n";
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) cin >> matrix[i][j];
	}

	
	for (i = 0; i < n; i++) {
		flag = 1;
// ��� ������ ��������������� �� ��������
		for (j = 1; j < m; j++) {
			if (matrix[i][j] < matrix[i][j - 1]) continue;
			else {
				flag = 0;
				break;
			}
		}
// ���� ������ �� �������������� �� ��������, �������� ���������� �� �����������
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
// ���� ���� ������� 1, �� ��� ������ ����� �������������� ��� �� ����������� ��� �� ��������
		}
		if (flag == 1) {
			for (j = 0, c; j < m; j++, c++) resp_list[c] = matrix[i][j];
			count += 1;
		}

// ������� ���������� ������� ������
	}
	if (count == 0) cout << 0;
	else {
		min = resp_list[0];
		for (i = 1; i < c; i++) if (min > resp_list[i]) min = resp_list[i];
		cout << "����������� ������� �����: " << min;
	}

	return 0;
}