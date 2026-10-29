#include "misBibliotecas.h"

void quickSort(int a[], int n);
int linsearch(int x, int k[], int n);

int main(void)
{
    int n, i, x;
    int *ptr;
    printf("Ingresa el tamanio del arreglo: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    if(ptr == NULL)
    {
        printf("Error, no hay memoria\n");
        free(ptr);
        ptr = NULL;
    }

    printf("Ingresa los numeros que quieres guardar en el arreglo:\n");
    for(i = 0; i < n; i++)
    {
        printf("num[%d]: ", i);
        scanf("%d", &ptr[i]);
    }

    quickSort(ptr, n);
    printf("Ingresa el numero que quieres buscar: ");
    scanf("%d", &x);

    linsearch(x, ptr, n);
    printf("Arreglo ordenado:\n");
    for(i = 0; i < n; i++)
    {
        printf("num[%d] = %d\n", i, ptr[i]);
    }
    
    free(ptr);
    ptr = NULL;
    return 0;
}

void quickSort(int a[], int n)
{
int i = 0, j = n - 1;
        int x =a[j/2], w;
        do{
                while (a[i] < x){
                        i++;
		}
                while (a[j] > x){
                        j--;
		}
                if (i<j){
                        w=a[i];
                        a[i]=a[j];
                        a[j]=w;
                }
                else{
                        if(i>j){
                                break;
                        }
                }
        } while (++i <= --j);

        if (j > 0) {
                quickSort(a, j + 1);
        }
        
        if (i < n-1){
                quickSort(a+1, n - 1);
        }
}

int linsearch(int x, int k[], int n)
{
    int i = 0;
    while(i < n && x > k[i])
    {
        i++;
    }
    
    if(x == k[i])
    {
        printf("El numero (%d) esta en la posicion: %d\n", x, i);
        return i;
    }
    else
    {
        printf("El numero no esta en el arreglo\n");
        return 0;
    }
}