#include <stdio.h>
#define PI 3.1416
#define CUADRADO(x) ((x)*(x))

int main(void)
{
    int x = 5;
    int suma = 0;

    suma = PI + x;
    int resultado = CUADRADO(9);
    printf("La suma es %d\n", suma);
    printf("El resultado de resultado es: %d", resultado);

    return 0;
}