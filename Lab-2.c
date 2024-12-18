#include <stdio.h>
#include <locale.h>

int check_col(int x_1, int y_1, int x_2, int y_2, int x_3, int y_3);

int main() {
    setlocale(LC_ALL, "RU");
    int x_1, y_1, x_2, y_2, x_3, y_3;
    printf("Введите координаты первого вектора: \n");
    scanf_s("%d", &x_1);
    scanf_s("%d", &y_1);
    printf("Введите координаты второго вектора: \n");
    scanf_s("%d", &x_2);
    scanf_s("%d", &y_2);
    printf("Введите координаты третьего вектора: \n");
    scanf_s("%d", &x_3);
    scanf_s("%d", &y_3);
    check_col(x_1, y_1, x_2, y_2, x_3, y_3);

    return 0;
}

int check_col(int x_1, int y_1, int x_2, int y_2, int x_3, int y_3) {
    if ((x_1 * y_2 == y_1 * x_2) && (x_1 * y_3 == y_1 * x_3) && (x_3 * y_2 == y_3 * x_2))
        printf("Вектора коллинеарны");
    else
        printf("Вектора не коллинеарны");

    return 0;
}
