#include <stdio.h>
#include <math.h>
#include <locale.h>

int funk_a(int a, int b, int c, int s);
int funk_b(int a, int b, int c);

int main() {
    setlocale(LC_ALL, "RU");
    int a, b, c, s;
    int variant;
    printf("������� �������(1 ��� 2): ");
    scanf_s("%d", &variant);
    if (variant == 1) {
        printf("������� 1 ������� ������������: ");
        scanf_s("%d", &a);
        printf("������� 2 ������� ������������: ");
        scanf_s("%d", &b);
        printf("������� 3 ������� ������������: ");
        scanf_s("%d", &c);
        printf("������� ������� ������������: ");
        scanf_s("%d", &s);
        funk_a(a, b, c, s);
    }
    else if (variant == 2) {
        printf("������� ����� ������������: ");
        scanf_s("%d", &a);
        printf("������� ����� ������������: ");
        scanf_s("%d", &b);
        printf("������� ���������� ������������: ");
        scanf_s("%d", &c);
        funk_b(a, b, c);
    }

    return 0;
}

int funk_a(int a, int b, int c, int s) { 
    float r = (float)(2 * s) / (a + b + c);
    float r_big = (float)(a * b * c) / (4 * s);

    printf("������ ��������� ����������: %.2f\n", round(r * 100) / 100.0);
    printf("������ ��������� ����������: %.2f", round(r_big * 100) / 100.0);
    
    return 0;
}

int funk_b(int a, int b, int c) {
    float r = (a + b - c) / 2.0;
    float r_big = c / 2.0;

    printf("������ ��������� ����������: %.2f\n", round(r * 100) / 100.0);
    printf("������ ��������� ����������: %.2f", round(r_big * 100) / 100.0);

    return 0; 
}