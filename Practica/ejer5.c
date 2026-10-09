#include "misBibliotecas.h"

void maximoMinimo(int x, int num[], int *min, int *max);

int main(void)
{
    int i, x;
    int *num, *min, *max;
    printf("Ingresa cuantos numeros quieres reservar: ");
    scanf("%d", &x);

    num = (int *)malloc(x * sizeof(int));
    if (num == NULL)
    {
        printf("Error, malloc fallo\n");
        exit(1);
    }

    printf("Ingresa los numeros que quieres guardar\n");
    for(i = 0; i < x; i++)
    {
        printf("num[%d] = ", i);
        scanf("%d", &num[i]);
    }

    maximoMinimo(x, num, min, max);

    printf("El maximo es %d\n", *max);
    printf("El minimo es %d\n", *min);

    free(num);
    num = NULL;
    return 0;
}

void maximoMinimo(int x, int num[], int *min, int *max)
{
    int i;
    *max = num[0];
    *min = num[0];

    for(i = 0; i < x; i++)
    {
        if(num[i] > *max)
        {
            *max = num[i];
        }
    }

    for(i = 0; i < x; i++)
    {
        if(num[i] < *min)
        {
            *min = num[i];
        }
    }

    return;
}