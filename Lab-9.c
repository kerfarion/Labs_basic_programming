#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

bool f(bool a, bool b);

int main() {
    setlocale(LC_ALL, "RU");
    float a, b;
    printf("������� ������ ���������� ����������: ");
    scanf_s("%f", &a);
    printf("������� ������ ���������� ����������: ");
    scanf_s("%f", &b);
    printf("�: %f, b: %f, a XOR b = %d\n", a, b, f(a, b));
    return 0;
}

bool f(bool a, bool b) {
    return !(a == b);
}