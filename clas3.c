#include <stdio.h>

int main(void) {
    int a, e;
    int i; 
    printf("Ingrese el numero ");
    scanf("%d", &a);
    e=0; 
    i=0;
    while (i <= a) {
        i += 1;
        printf("%d\n", e);
        e=e+i; 

        
    }
    return 0; 
    } 