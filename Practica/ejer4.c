#include "misBibliotecas.h"

void cambioVar(int *x, int *y);

int main(void)
{
    int num1, num2;

    printf("Ingresa 2 numeros enteros \n");

    printf("num1 = ");
    scanf("%d", &num1);

    printf("num2 = ");
    scanf("%d", &num2);

    printf("Antes del cambio num1 = %d | num2 = %d\n", num1, num2);

    cambioVar(&num1, &num2);

    printf("Despues del cambio num1 = %d | num2 = %d\n", num1, num2);

    return 0;
}

void cambioVar(int *x, int *y)
{
    int temporal;

    temporal = *x;
    *x = *y;
    *y = temporal;

    /* Se usan uncicamente apuntadores para cambiar las variables
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    */
    return;
}