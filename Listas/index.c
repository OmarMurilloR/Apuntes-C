/*#include <stdio.h>

typedef struct numero
{
    int numero;
    struct datos *sig;
}lista;

int main(void)
{
    lista *inicio, *nodo, *aux;
    nodo = malloc(sizeof(int));
    if(nodo == NULL)
    {
        printf("Erro, no hay memoria\n");
        return 0;
    }



    return 0;
}
#include <stdlib.h>
#include <stdio.h>

struct nodo
{
    int numero;
    struct nodo *sigCaja;
};

int main(void)
{   // Creamos un nodo de memoria
    struct nodo *primero = malloc(sizeof(struct nodo));

    if(primero == NULL) return 1;

    // Guardar dato
    primero->numero = 5;
    // Indicar que no hay otro nodo
    primero->sigCaja = NULL;
    
    printf("Dato = %d\n", primero->numero);
    free(primero);

    return 0;
} 

/// Ejercicio que hice yo

#include <stdio.h>
#include <stdlib.h>

struct datos{
    int num1;
    int num2;
    int num3;
    struct datos *sig;
};

int main(void)
{
    struct datos *inicio = malloc(sizeof(struct datos));
    if(inicio == NULL) return 0;

    // Se guardann los datos
    inicio->num1 = 5;
    inicio->num2 = 20;
    inicio->num3 = 1;

    inicio->sig = NULL;

    printf("Num1 = %d | Num2 = %d | Num3 = %d \n", inicio->num1, inicio->num2, inicio->num3);
    free(inicio);

    return 0;
}

///// Ejercicio que hizo el profe

#include <stdio.h>
#include <stdlib.h>

struct Nodo{
    int dato;
    struct nodo *siguiente;
};

int main(void)
{
    struct Nodo *primero = malloc(sizeof(struct Nodo));
    struct Nodo *segundo = malloc(sizeof(struct Nodo));
    struct Nodo *tercero = malloc(sizeof(struct Nodo));

    if(primero == NULL || segundo == NULL || tercero == NULL)
    {
        free(primero);
        free(segundo);
        free(tercero);
        return 1;
    }

    primero->dato = 7;
    segundo->dato = 0;
    tercero->dato = 3;

    tercero->siguiente = NULL;

    printf("Los numeros guardados son: %d, %d, %d\n", primero->dato, segundo->dato, tercero->dato);
    free(primero);
    free(segundo);
    free(tercero);

    return 0;
} */

#include <stdio.h>
#include <stdlib.h>

struct Nodo{
    int dato;
    struct Nodo *siguiente;
};

int main(void)
{
    struct Nodo *primero = NULL;
    struct Nodo *final = NULL;
    char opcion;
    int numero;

    do{
        printf("Quieres agregar unn numero (Y/N)\n");
        scanf(" %c", &opcion);

        if(opcion == 'Y' || opcion == 'y')
        {
            printf("Ingresa unn numero: ");
            scanf("%d", &numero);

            struct Nodo *nuevo = malloc(sizeof(struct Nodo));
            if(nuevo == NULL)
            {
                printf("Error al reservar la memoria\n");
                break;
            }
            nuevo->dato = numero;
            nuevo->siguiente = NULL;
            
            if(primero == NULL)
            {
                primero = nuevo;
                final = nuevo;
            }
            else{
                final->siguiente = nuevo;
                final = nuevo;
            }
        }
        
    }while(opcion == 'Y' || opcion == 'y');

    printf("Numero de la lista: \n");
    struct Nodo *actual = primero;

    while(actual != NULL)
    {
        printf("%d\n",actual->dato);
        actual = actual->siguiente;
    }
    printf("NULL\n");
    // Liberamos memoria
    struct Nodo *liberar = primero;
    while(liberar != NULL)
    {
        struct Nodo *temporal = liberar;
        liberar = liberar->siguiente;
        free(temporal);
    }

    return 0;
}