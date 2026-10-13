#include "misBibliotecas.h"

void invertirOrden(int n,int ptr[]);

int main(void)
{
    int n, i, suma;
    int *ptr;

    printf("Ingresa la cantidad de numeros que quieres guardar: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    if(ptr == NULL)
    {
        printf("ERROR, no hay espacio de memoria");
        exit(1);
    }

    printf("Ingresa los numeros que deseas guardar:\n");
    for(i = 0; i < n; i++)
    {
        printf("num[%d] = ", i);
        scanf("%d", &ptr[i]);
    }

   printf("Este es el orden del arreglo:\n");
   for(i = 0; i < n; i++)
   {
        printf("num[%d] = %d\n", i, ptr[i]);
   }
    

   printf("Despues de invertir el orden:\n");
   invertirOrden(n, ptr);

    return 0;
}

void invertirOrden(int n,int *ptr)
{
    int *inicio = ptr;
    int *fin = ptr + n - 1;
    int temporal;

   while(*inicio < *fin) 
   {
        temporal = *inicio;
        *inicio = *fin;
        *fin = temporal;
        *inicio++;
        *fin--;
   }
   
   for(int i = 0; i < n; i++)
   {
        printf("num[%i] = %d\n", i, ptr[i]);
   }

    return;
}