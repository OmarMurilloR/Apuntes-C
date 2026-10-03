#include "misBibliotecas.h"

int sumaCadena(int numeros[], int x);

int main(void)
{
    int suma, x, i;
    int *numeros;

    printf("Ingresa la cantidad de numeros que quieres guardar: ");
    scanf("%d", &x);

    numeros = malloc(x * sizeof(int));
    if(numeros == NULL)
    {
        printf("La cantidad de espacios no puede ser 0\n");
        exit(1);
    }

    printf("Ingresa los numeros que quieras guardar\n");
    for(i = 0; i < x; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &numeros[i]);
    }

    suma = sumaCadena(numeros, x);

    printf("\nLa suma de todos los numeros es: %d\n", suma);

    free(numeros);
    return 0;
}

int sumaCadena(int numeros[], int x)
{
    int i, suma;

    for(i = 0; i < x ; i++)
    {
        suma += numeros[i];
    }

    suma = suma - 1;
    return suma;
}