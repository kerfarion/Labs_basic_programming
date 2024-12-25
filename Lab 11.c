#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void sum(int** matrix, int n, int m);

int main() {
    setlocale(LC_ALL, "RU");
    int** a;
    int n, m;

    printf("Введите количество строк и столбцов матрицы через пробел: ");
    scanf_s("%d %d", &n, &m);

    a = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        a[i] = (int*)malloc(m * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        printf("Строка %d (%d элементов): ", i + 1, m);
        for (int j = 0; j < m; j++) {
            scanf_s("%d", &a[i][j]);
        }
    }

    sum(a, n, m);

    for (int i = 0; i < n; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}

void sum(int** matrix, int n, int m) {
    int* suma;
    suma = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        suma[i] = 0;
        for (int j = 0; j < m; j += 2) {
            suma[i] += matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", suma[i]);
    }

    free(suma);
}

