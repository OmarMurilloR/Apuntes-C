#include <stdio.h>

int main(void)
{
    //int desbordar = 3000000000000;

    unsigned int puntos = 300;
    char inicial = 'h';
    short anio = 2006; //ALmacena de -32 mil hasta +32 mil
    int edad = 19;
    long poblacion = 1000000; //Guarda desde -2 millones a +2 millones, vale 32 bits
    long long estrellas = 100000000; // Hasta 10 Ceros, vale 64 bits
    float dinero = 35.5; //almacena hasta 38 digitos y vale 32 bits
    double Pi = 3.1415926335; //guarda 308 digitos despues del punto decimal
    

    puntos = puntos - 500;
    printf("Naci en el anio %hd \n", anio);
    printf("En mi ciudad hay de poblacion %ld \n", poblacion);
    printf("Tengo %f pesos \n", dinero);
    printf("El valor de PI es %f\n", Pi);

    //printf("desbordar = %d", desbordar);
    printf("puntos = %u", puntos);
}