#include <stdio.h>

// Macro constante
#define clase 1

// Macro con parametro
#define CUADRADO(x) ((x)*(x))

// Este bloque de codigo solo va a existir si "DEBUG" esta definido
#ifdef DEBUG
#define LOG(mensaje) printf("[DEBUG] %s \n", mensaje)
#else
// Si DEBUG esta definido LOG se convierte en un printf
// SIN DEBUG, LOG(mensaje) no hace nada
#define LOG(mensaje) ((void)0)
#endif

int main(void)
{
    printf("Version: %d \n", clase);

    int n = 5;
    printf("CUADRADO(%d) = %d\n", n, CUADRADO(n));

    // DEBUG se activa desde el compilador: gcc -DEBUG archivo.c
    LOG("Este mensaje solo aparece si compilas con -DDEBUG");


    return 0;
}