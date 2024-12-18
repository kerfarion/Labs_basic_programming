#include <stdio.h>
#include <math.h>
#include <locale.h>

int funk_a(int a, int b, int c, int s);
int funk_b(int a, int b, int c);

int main() {
    setlocale(LC_ALL, "RU");
    int a, b, c, s;
    int variant;
    printf("Введите вариант(1 или 2): ");
    scanf_s("%d", &variant);
    if (variant == 1) {
        printf("Введите 1 сторону треугольника: ");
        scanf_s("%d", &a);
        printf("Введите 2 сторону треугольника: ");
        scanf_s("%d", &b);
        printf("Введите 3 сторону треугольника: ");
        scanf_s("%d", &c);
        printf("Введите площадь треугольника: ");
        scanf_s("%d", &s);
        funk_a(a, b, c, s);
    }
    else if (variant == 2) {
        printf("Введите катет треугольника: ");
        scanf_s("%d", &a);
        printf("Введите катет треугольника: ");
        scanf_s("%d", &b);
        printf("Введите гипотенузу треугольника: ");
        scanf_s("%d", &c);
        funk_b(a, b, c);
    }

    return 0;
}

int funk_a(int a, int b, int c, int s) { 
    float r = (float)(2 * s) / (a + b + c);
    float r_big = (float)(a * b * c) / (4 * s);

    printf("Радиус вписанной окружности: %.2f\n", round(r * 100) / 100.0);
    printf("Радиус описанной окружности: %.2f", round(r_big * 100) / 100.0);
    
    return 0;
}

int funk_b(int a, int b, int c) {
    float r = (a + b - c) / 2.0;
    float r_big = c / 2.0;

    printf("Радиус вписанной окружности: %.2f\n", round(r * 100) / 100.0);
    printf("Радиус описанной окружности: %.2f", round(r_big * 100) / 100.0);

    return 0; 
}