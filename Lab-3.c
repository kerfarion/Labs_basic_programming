#include <stdio.h>
#include <locale.h>

int last_num(int n);

int main() {
    setlocale(LC_ALL, "RU");
    int num;
    printf("¬ведите n: ");
    scanf_s("%d", &num);
    last_num(num);

    return 0;
}

int last_num(int num) {
    switch (num % 10) {
    case 0:
        printf("0");
        break;
    case 1:
        printf("1");
        break;
    case 2:
        printf("4");
        break;
    case 3:
        printf("9");
        break;
    case 4:
        printf("6");
        break;
    case 5:
        printf("5");
        break;
    case 6:
        printf("6");
        break;
    case 7:
        printf("9");
        break;
    case 8:
        printf("4");
        break;
    case 9:
        printf("1");
        break;
    default:
        printf("¬ведено некорректное значение");
    }

    return 0;
}

