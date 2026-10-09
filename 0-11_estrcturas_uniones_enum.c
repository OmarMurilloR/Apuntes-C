/* Crea un programa usando estructuras y apuntadores 
    que te pida nombre, edad, altura y que te imprima el resultado */

#include <stdio.h>

struct datos
{
    char nombre[25];
    int edad;
    float altura;
};

int main(void)
{
    struct datos perfil;

    printf("Ingresa tu nombre: \n");
    scanf("[^\n]", perfil.nombre);

    printf("Ingresa tu edad: \n");
    scanf("[^\n]", &perfil.edad);

    printf("Ingresa tu altura: \n");
    scanf("[^\n]", &perfil.altura);

    return 0;
} 
/*
#include <stdio.h>

struct Persona
{
    char nombre[20];
    int edad;
    float altura;

};

int main(void)
{
    struct Persona p;
    printf("Ingresa tu nombre: \n");
    scanf("%19s", p.nombre);

    printf("Ingresa tu edad\n");
    scanf("%d", &p.edad);

    printf("Ingresa tu altura:\n");
    scanf("%f", &p.altura);

    printf("\nPersona registrada\n");

    printf("Nombre: %s | Edad: %d | Altura: %.2f\n", p.nombre, p.edad, p.altura);

    return 0;
} 

#include <stdio.h>

struct persona{
    char nombre[20];
    int edad;
};

void imprimirPorValor(struct persona p)
{
    printf("Nombre: %s | Edad: %d\n", p.nombre, p.edad);
}

void imprimirPorPuntero(const struct persona p)
{
    printf("Nombre: %s | Edad: %d\n", p->nombre, p->edad);
}

void cumplirAnios(struct persona p)
{
    p->edad = p->edad + 1;
}

int main(void)
{
    struct persona grupo[3] = {
        {"ana", 20}, {"pablo", 19}, {"diego", 19}
    };

    return 0;
} */