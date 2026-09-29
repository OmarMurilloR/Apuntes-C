/* 

#include <stdio.h>

int main(void)
{
    int x = 42;
    int *p =  &x;

    printf("El valor de x es igual a: %d\n", x);
    printf("Direccion de x(&x) = %p\n", (void*)&x);
    //printf("Direccion de x = %d\n", &x);

    printf("Valor del puntero p es: %p\n", (void*)p);
    printf("Valor apuntado por p (*p) = %d\n", *p);
    return 0;
}

/////Ejercicio 2

#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x;

    printf("Antes x = %d\n", x);
    printf("Antes *p = %d\n", *p);

    *p = 90;

    printf("Despues x = %d\n", x);
    printf("Despues *p = %d\n", *p);

    return 0;
}
    
#include <stdio.h>

int main(void)
{
    int arr[5] = {10,20,30,40,50};
    
    printf("Direcciones\n");
    printf("arr(base) = %p\n", (void*)arr);
    printf("&arr[0] = %p\n", (void*)&arr[0]);
    printf("&arr[1] = %p\n", (void*)&arr[1]);
    printf("&arr[2] = %p\n", (void*)&arr[2]);
    printf("&arr[3] = %p\n", (void*)&arr[3]);
    printf("&arr[4] = %p\n", (void*)&arr[4]);
    

    printf("\nComparacion arr[i] vs (arr + 1)\n");
    for (int i = 0; i < 5; i++)
    {
        printf("i = %d | arr[%d] = %d | =(arr + %d) = %d\n", i,i,arr[i],i,*(arr + i));
    }
    
    return 0;
} 

//// Cambiando unna variable local conn punteros

#include <stdio.h>

void cambiarPorValor(int x)
{
    x = 900;
    
}
void cambiarConPunteros(int *p)
{
    *p = 999;

}

int main(void)
{
    int y = 10;
    printf("Inicial: %d\n", y);

    cambiarPorValor(y);
    printf("Despues de cambiar por valor: y = %d\n", y);

    cambiarConPunteros(&y);
    printf("Despues de cambiarConPuntero: y = %d\n", y);

    return 0;
} 

///// Doble apuntador

#include <stdio.h>

int main(void)
{
    int a = 6;
    int b = 99;
    int *p = &a;
    int **q = &p;

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);
    printf("Valor de a: %d\n", *p);
    printf("Valor de a: %d\n", **q);

    return 0;
} 

#include <stdio.h>

void apuntarA(int **pp, int *nuevoDestino)
{
    if(pp == NULL)return;
    *pp = nuevoDestino;
    
}

int main(void)
{
    int a = 5;
    int b = 99;
    int c;
    int *q = &c;
    int *p = &a;

    printf("Inicialmente *p = %d\n", *p);
    apuntarA(&q, &b);
    
    printf("Despues: *p = %d\n", *p); 
    return 0;
} 

Crea unn programa que te pida 2 numeros y que te arroge 2 resultados
1- Se suman los 2 numeros
2- Se multiplicann ambos numeros
y por ultimo si el primer numero que ingreso por el teclade es mayor que el segundo
se intercambien posicioes en variables
*/

#include <stdio.h>

int multiplicacionEnteros(int num1, int num2)
{
    return num1 * num2;
}
int sumarEnteros(int num1, int num2)
{
    return num1 + num2;
}

void cambiarVariables(int *p, int *q)
{
    *p = &num2;
    *q = &num1;

    return;
}
int main(void)
{
    int num1, num2, suma, multiplicacion;

    printf("Ingresa un numero entero (num1):");
    scanf("%d\n", &num1);
    printf("Ingresa otro numero entero (num2):");
    scanf("%d\n", &num2);

    suma = sumarEnteros(num1, num2);
    multiplicacion = multiplicacionEnteros(num1, num2);

    if(num1 > num2)
    {
        cambiarVariables(&num1, &num2);
    }

    printf("La suma de los 2 numeros es: %d\n", suma);
    printf("La multiplicacion de los 2 numeros es: %d", multiplicacion);
    printf("Cambio de las variables, num 1 = %d | num2 = %d", num1, num2);
    
    return 0;
}
