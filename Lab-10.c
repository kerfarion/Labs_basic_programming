#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void bubble_sort(int lis[], int len);

int main() {
    setlocale(LC_ALL, "RU");
    int* a;
    int d, n, j = 1;

    printf("Введите длину массива: ");
    scanf_s("%d", &n);

    a = (int*)malloc((n + 1) * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Элемент %d: ", i + 1);
        scanf_s("%d", &a[i]);
    }

    bubble_sort(a, n);
    printf("Вот отсортированный массив: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    printf("Введите число, которое будет добавленно в массив: ");
    scanf_s("%d", &d);

    a[n] = d;
    while (a[n - j] > d && j <= n) {
        int temp = a[n - j];
        a[n - j] = a[n - j + 1];
        a[n - j + 1] = temp;
        j++;
    }

    printf("Вот отсортированный массив с добавленной переменной: ");
    for (int i = 0; i < (n + 1); i++) printf("%d ", a[i]);

    free(a);
    return 0;
}

void bubble_sort(int lis[], int len) {
    while (len--) {
        int flag = 0;
        for (int i = 0; i < len; i++) {
            if (lis[i] > lis[i + 1]) {
                int temp = lis[i];
                lis[i] = lis[i + 1];
                lis[i + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0) break;
    }
}

