#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RU");
    int arr[128];
    int c, i;
    float sr_z;
    printf("¬ведите длину массива(<128): ");
    scanf_s("%d", &c);

    if (c > 127) {
        printf("¬ведено некорректное значение");
        return 1;
    }

    for (i = 0; i < c; i++) {
        scanf_s("%d", &arr[i]);
    }

    sr_z = (float)arr[1] / arr[0];

    for (i = 2; i < c; i++) {
        if ((float)arr[i] / arr[i - 1] == sr_z) continue;
        else {
            printf("Ёто не геометрическа€ прогресси€: %d", 0);
            return 0;
        }
    }
    printf("«наменатель прогрессии: %f", sr_z);
    return 0;
}