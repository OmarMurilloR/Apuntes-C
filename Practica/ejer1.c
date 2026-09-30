#include "misBibliotecas.h"

int sumaEnteros(int num1, int num2);
int producto(int num1, int num2);

int main(void)
{
    int num1, num2, suma, product;

    printf("Ingresa 2 numeros enteros divididos por un espacio: ");
    scanf("%d %d", &num1, &num2);

    
    suma = sumaEnteros(num1, num2);
    
    printf("nLa suma de los numeros %d y %d es: %d\n", num1, num2, suma);

    if(num1 > num2)
    {
        printf("El numero %d es mayor que %d\n", num1, num2);
    }
    else if(num1 < num2)
    {
        printf("El numero %d es menor que %d\n", num1, num2);
    }
    else
    {
        printf("Los numeros son iguales\n");
    }
    product = producto(num1, num2);

    printf("El producto de %d y %d es: %d\n", num1, num2, product);

    return 0;

}// main

int sumaEnteros(int num1, int num2)
{
    return num1 + num2;
}

int producto(int num1, int num2)
{
    return num1 * num2;
}