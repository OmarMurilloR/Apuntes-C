#include "misBibliotecas.h"

int main(void)
{
    int n, i, buscar;
    int *num;

    printf("Ingresa cuantos numeros deseas guardar: ");
    scanf("%d", &n);

    num = (int *)malloc(n * sizeof(int));

    if(num == NULL)
    {
        printf("Error, malloc fallo\n");
        return 0;
    }
    
    // Guarda los numeros que el usuario ingresa
    printf("\nIngresa los numeros que seas guardar:\n");
    for(i = 0; i < n; i ++)
    {
        printf("num[%d] = ", i);
        scanf("%d", &num[i]);
    }
    printf("\n");

    printf("Que numero deseas buscar: ");
    scanf("%d", &buscar);

    for(i = 0; i < n; i++)
    {
        if(num[i] == buscar)
        {
            printf("Tu numero se encuentra en la posicion num[%d] = %d\n", i, num[i]);
            break;
        }
    }

    if(i == n)
    {
        printf("Tu numero no se encuentra en los numeros que guardaste\n");    
    }

    free(num);
    num = NULL;

    return 0;
}