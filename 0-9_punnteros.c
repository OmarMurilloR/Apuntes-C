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
    int temporal;
    temporal = *p;
    *p = *q;
    *q = temporal;

    return;
}
int main(void)
{
    int num1, num2, suma, multiplicacion;

    printf("Ingresa un numero entero (num1): ");
    scanf("%d", &num1);
    printf("Ingresa otro numero entero (num2): ");
    scanf("%d", &num2);

    suma = sumarEnteros(num1, num2);
    multiplicacion = multiplicacionEnteros(num1, num2);
    printf("\nAntes de cambiar: num1 = %d | num2 = %d\n", num1, num2);
    if(num1 > num2)
    {
        cambiarVariables(&num1, &num2);
    }

    printf("La suma de los 2 numeros es: %d\n", suma);
    printf("La multiplicacion de los 2 numeros es: %d\n", multiplicacion);
    printf("Cambio de las variables: num1 = %d | num2 = %d\n", num1, num2);
    
    return 0;
} 

#include <stdio.h>

void ordenar(int *a, int *b)
{
    if (a == NULL || b == NULL)return;
    if(a == b) return;
    if (*a > *b) // Esto cambia las variables del main
    {   
        int temporal = *a;
        *a = *b;
        *b = temporal;
    }
    
}
void operacionesMatematicas(int a, int b, int *suma, int *multiplicacion)
{
    if(suma == NULL || multiplicacion == NULL) return;
    *suma = a + b;
    *multiplicacion= a * b;
}
int main(void)
{
    int a, b;

    printf("Ingresa un numero:\n");
    scanf("%d", &a);
    printf("Ingresa otro numero entero:\n");
    scanf("%d", &b);

    printf("Antes de ordenar: a = %d, b = %d\n", a, b);
    ordenar(&a,&b);
    printf("Despues de ordenar: a = %d, b = %d\n", a ,b);

    int suma, multiplicacion;
    operacionesMatematicas(a,b,&suma,&multiplicacion);
    printf("Suma = %d\n", suma);
    printf("Multiplicacion = %d\n", multiplicacion);

    return 0;
} */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i;

    printf("Cuantos enteros quieres guardar:\n");
    scanf("%d", &n);

    // Salimos si n es menor o igual a 0
    if(n <= 0)
    {
        printf("N debe ser mayor a 0\n");
        return 0;
    }
    // Reservamos n enteros
    int *arr = (int *)malloc(n * sizeof(int));

    //Salimos del programa si no se cumple
    if(arr == NULL)
    {
        printf("Error, malloc fallo\n");
        return 0;
    }

    // Llenamos el arreglo con un for
    for(i = 0; i < n; i++)
    {
        // Aqui funciona como un arreglo normal aunque sea memoria dinamica
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nAhora vamos a crecer el arrglo en 2 elementos, usando la funcion realloc\n");
    int nuevoNum = n + 2;

    int *temp = (int *)realloc(arr, nuevoNum *sizeof(int));
    if(temp == NULL)
    {
        printf("Error, realloc fallo pero el arrglo original sigue valido\n");
        free(arr);
        arr == NULL;
        return 0;
    }
    // Si temp no es NULL, asigno arr = temp
    arr = temp;

    for(i = n; i < nuevoNum; i++)
    {
        // El espacio nuevo no viene en 0
        printf("arr[%d] (nuevo) = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n Arreglo final:\n");
    for(i = 0; i < nuevoNum; i++)
    {
        printf("arr[%d] = %d\n",i , arr[i]);
    }

    printf("\n");
    //libero memoria con free
    free(arr);
    arr == NULL;
    

    return 0;
}