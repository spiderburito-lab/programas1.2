#include<stdio.h>
int main (void){
    int i=0;
    float e,b;
    printf("ingresa cantidades "); 
    for (; i == 0; ){
        scanf("%f",e); 
        if (e>0){
            printf("es mayor uq cero%f",e);
        }else{
            if(e<0){
                printf("es menor que cero%f",e);  
            } 
            else{
                printf("es igual a 0");
            }

    }
    return 0;
}