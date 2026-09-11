/* #include <stdio.h>

void calcularArea(int base, int altura);

int base, altura;

int main(void)
{
    printf("Este programa calcula el area de un rectangulo\n");
    printf("Ingresa la base:");
    scanf("%d", &base);

    printf("\nIngresa la altura:");
    scanf("%d", &altura);

    calcularArea(base, altura);

    return 0;
}

void calcularArea(int base, int altura)
{
    int area = base * altura;

    printf("\nEl area del Rectangulo es: %d\n", area);
    return;
} 

////Programa que calcula el area de un rectangulo con una funcion afuera del main

#include <stdio.h>

double areaRectangulo(double base, double altura)
{
    return base * altura;
}

int main(void)
{
    double base, altura;
    printf("Ingresa la base: \n");
    scanf("%lf", &base);

    printf("Ingresa la altura\n");
    scanf("%lf", &altura);

    double area = areaRectangulo(base, altura);
    printf("El area del rectangulo es: %lf\n", area);

    return 0;
} 

///Calcula el area de un triangulo usando una funcion afuera del main

#include <stdio.h>

int areaTriangulo(int base, int altura)
{
    return (base * altura)/2;
}

int main(void)
{
    int base, altura, area;

    printf("Este programa calula el area de un triangulo\n");
    printf("Ingresa la base:");
    scanf("%d", &base);

    printf("\nIngresa la altura:");
    scanf("%d", &altura);

    area = areaTriangulo(base, altura);
    printf("\nEl area del triangulo es: %d\n", area);

    return 0;
} */

#include <stdio.h>

int contadorGlobal = 0;

void incrementar(void)
{
    int contadorLocal = 0;
    contadorLocal++;
    contadorGlobal++;

    printf("Dentro de incrementar -> contadorLocal = %d, conntadorGlobal = %d\n", contadorLocal, contadorGlobal);
}

int main(void)
{
    printf("Dentro de incrementar -> contadorGlobal %d\n", contadorGlobal);

    incrementar();
    incrementar();
    incrementar();
    
    return 0;
} 