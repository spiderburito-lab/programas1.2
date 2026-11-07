#include <stdio.h>

int main(void) {
    int a, b;
    int i;

    printf("Ingrese el numero inicial: ");
    scanf("%d", &a);

    printf("Ingrese el numero final: ");
    scanf("%d", &b);

    if (a <= b) {
        i = a;

        while (i <= b) {
            if (i % 2 != 0) {
                printf("%d\n", i);
            }

            i = i + 1;
        }
    } else {
        i = a;

        while (i >= b) {
            if (i % 2 != 0) {
                printf("%d\n", i);
            }

            i = i - 1;
        }
    }

    return 0;
}