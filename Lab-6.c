#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int nod(int a, int b);

int main() {
    setlocale(LC_ALL, "RU");
    int a, b;
    printf("Введите m и n дроби: ");
    scanf_s("%d %d", &a, &b);
    int x = nod(a, b);
    a /= x;
    b /= x;
    printf("Сокращённая дробь: %d/%d", a, b);
    return 0;
}

int nod(int a, int b) {
    a = abs(a), b = abs(b);
    if (b == 0) return a;
    else return nod(b, a % b);
}