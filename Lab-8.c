#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RU");
    int matrix[128][128];
    int n, m, i, j, c;
    float flag = 0;
    printf("������� ����� � ������ �������: ");
    scanf_s("%d", &n);
    scanf_s("%d", &m);
    printf("������� %d �����\n", n);
    printf("�� %d ���������\n", m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) scanf_s("%d", &matrix[i][j]);
    }
    if (n < m) c = n;
    else c = m;

    for (i = 0; i < c; i++) {
        if (matrix[i][i] > 0 && matrix[i][i] % 2 == 1) {
            flag = 1;
            break;
        }
    }

    if (flag) printf("����� ����� ����.");
    else printf("������ ����� ���.");

    return 0;
}

