#include <stdio.h>
#include <locale.h>

int fact(int a);

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    printf("������� n: ");
    scanf_s("%d", &n);
    printf("��������� ����� 2n + 1 ����� : %d\n", fact(2 * n + 1));

    return 0;
}

int fact(int a) {
    int f = 1, j = 2;
    while (j <= a) {
        f *= j;
        j++;
    }

    return f;
}