/* Crea un programa usando estructuras y apuntadores 
    que te pida nombre, edad, altura y que te imprima el resultado 

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
} 

/////////////////

Crea un programa que guarde nombres complejos y mis apellidos, y hacerlo con structs


#include <stdio.h>

struct datos
{
    char nombre[25];
    char apellidos[25];
};

int main(void)
{
    struct datos d;

    printf("Dime tus nombres:\n");
    fgets(d.nombre,sizeof(d.nombre), stdin);

    printf("Dime tus apellidos\n");
    fgets(d.apellidos,sizeof(d.apellidos), stdin);

    printf("Tu nombre completo es: %s %s", d.nombre, d.apellidos);

    return 0;
} 

////////////////////

#include <stdio.h>

struct datos
{
    char nombre[25];
    char apellidos[25];
};

void imprimirNombre(struct datos *d)
{
    //printf("Tu nombre completo es: %s %s\n", d->nombre, d->apellidos);
    printf("Tu nombre completo es: %s %s\n", (*d).nombre, (*d).apellidos);
}

int main(void)
{
    struct datos d;

    printf("Dime tus nombres:\n");
    fgets(d.nombre,sizeof(d.nombre), stdin);

    printf("Dime tus apellidos\n");
    fgets(d.apellidos,sizeof(d.apellidos), stdin);

    imprimirNombre(&d);

    return 0;
} 
*/
//////////////////// Ejercicio utilizando structs, funciones, operador flecha  y apuntadores

#include <stdio.h>

struct persona{
    char nombre[20];
    int edad;
};

void imprimirPorValor(struct persona p)
{
    printf("Nombre: %s | Edad: %d\n", p.nombre, p.edad);
}

void imprimirPorPuntero(const struct persona *p)
{
    printf("Nombre: %s | Edad: %d\n", p->nombre, p->edad);
}

void cumplirAnios(struct persona *p)
{
    p->edad = p->edad + 1;
}

int main(void)
{
    struct persona grupo[3] = {
        {"ana", 20}, {"pablo", 19}, {"diego", 19}
    };

    printf("Recorrido del arreglo de structs\n");
    for(int i = 0; i < 3; i++)
    {
        imprimirPorPuntero(&grupo[i]);
    }

    printf("Ejemplo: pasar por valor(esta es la copia)\n");
    imprimirPorValor(grupo[0]);

    printf("Ejemplo modifica usando punteros:\n");
    printf("Antes -> ");
    imprimirPorPuntero(&grupo[0]);

    cumplirAnios(&grupo[0]);

    printf("Despues -> ");
    imprimirPorValor(grupo[0]);

    return 0;
} 
/**
#include <stdio.h>

struct persona{
    char nombre[20];
    int edad;
};

void imprimirPorValor(struct persona p)
{
    p.edad = 99;
    printf("Nombre: %s | Edad: %d\n", p.nombre, p.edad);
}

/// quite temporalmente el const 
void imprimirPorPuntero(struct persona *p)
{
    //printf("Nombre: %s | Edad: %d\n", p->nombre, p->edad);
    p->edad = 99;
}

void cumplirAnios(struct persona *p)
{
    p->edad = p->edad + 1;
}

void probarValor(struct persona p)
{
    printf("Direccion de p: %p\n",(void *)&p);
}

void probarPuntero(struct persona *p)
{
    printf("Direccion recibida: %p \n", (void *)p);
}

int main(void)
{
    struct persona grupo[3] = {
        {"ana", 20}, {"pablo", 19}, {"diego", 19}
    };

    printf("Recorrido del arreglo de structs\n");
    for(int i = 0; i < 3; i++)
    {
        imprimirPorPuntero(&grupo[i]);
    }

    printf("Ejemplo: pasar por valor(esta es la copia)\n");
    imprimirPorValor(grupo[0]);
    printf("Fuera de la funcion: %d\n", grupo[0].edad);

    printf("Ejemplo modifica usando punteros:\n");
    printf("Antes -> ");
    imprimirPorPuntero(&grupo[0]);
    printf("Edad original: %d \n", grupo[0].edad);

    cumplirAnios(&grupo[0]);

    printf("Despues -> ");
    imprimirPorPuntero(&grupo[0]);

    printf("Direccion original: %p \n", (void *)&grupo[0]);

    probarValor(grupo[0]);
    probarPuntero(&grupo[0]);


    return 0;
} */