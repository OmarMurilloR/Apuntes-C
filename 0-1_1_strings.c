/* #include <stdio.h>

char nombre, segundoNombre, apellidoM, apellidoP;

int main(void)
{
    printf("Dime tu nombre completo:\n");
    scanf("%c %c %c %c", &nombre, &segundoNombre, &apellidoM, &apellidoP);

    printf("Tu nombre completo es: %c %c %c %c", nombre, segundoNombre, apellidoM, apellidoP);
    return 0;
}

///Guarda texto en una variable

#include <stdio.h>

int main(void)
{
    char nombreCompleto[50];

    printf("Escribe tu nombre completo: \n");
    fgets(nombreCompleto, sizeof(nombreCompleto), stdin);
    // scanf("%s", &nombreCompleto);

    printf("%s", nombreCompleto);
    
    return 0;
} */

#include <stdio.h>

int main(void)
{
    int numero = 80;

    printf("Entero: %d\n Flotante: %f\n Double: %lf\n Caracter: %c", numero, (float)numero, (double)numero, (char)numero);
    return 0;
}