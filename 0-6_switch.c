#include <stdio.h>

int main(void)
{
    int opcion;

    printf("Elija la opcion:\n");
    printf("1) Saludar\n");
    printf("2) Mostrar tip de programacion\n");
    printf("3) Salir\n");
    
    scanf("%d\n", &opcion);

    switch (opcion)
    {
        case 1:
            printf("Hola Mundo\n");
            break;
        case 2:
            printf("Identar bien tu codigo\n");
            break;
        case 3:
            printf("Saliendo.....\n");
            break;
        default:
            printf("Opcion invalida\n");
            break;
    }

}