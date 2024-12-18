#include <stdio.h>
#include <locale.h>

int suma(int n, float x);
int fact(int a);

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    float x;
    printf("¬ведите n: ");
    scanf_s("%d", &n);
    printf("¬ведите x: ");
    scanf_s("%f", &x);
    suma(n, x);

    return 0;
}

int suma(int n, float x) {
    float resp = 0;
    for (int i = 1; i <= n; i++) {
        resp += (x / fact(i));
    }
    printf("—умма равна: %.2f\n", resp);
    return 0;
}

int fact(int a) {
    int f = 1;
    for (int j = 2; j <= a; j++) f *= j;

    return f;
}
