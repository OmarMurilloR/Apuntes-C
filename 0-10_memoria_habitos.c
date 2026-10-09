/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = (int *)malloc(2 * sizeof(int));
    if(p == NULL)
    {
        printf("Error malloc fallo\n");
        return 0;
    }
    p[0] = 1;
    p[1] = 2;

    printf("p[0] = %d\n", p[0]);
    printf("p[1] = %d\n", p[1]);

    // Ya no necesita esta memoria puedes volver a utilizarla
    // free(p); no borra los datos fisicos, lo que cambia es el puntero no la memoria
    // Esta memoria ya no la necesito devuelvela
    free(p);
    // y quiero que la variable p deje de apuntar a esa direccion
    p = NULL;

    printf("%d\n", p[0]);

    return 0;
} 

/// Errores tipicos al manegar memoria dinamica
    Memory leak: Reservar espacio de memoria y no liberarlo
    Double free: Liberar 2 veces un puntero
    Use-after-free: Usa la memoria despues de usar la funcion free
            Patron recomendado:
            free(ptr);
            ptr = NULL;

            ┌─────────┬─────────┐
            │    1    │    2    │
            └─────────┴─────────┘
                ↑
                p
// analogia del ejercicio
    Imagina que tienes un papel con la drieccion de una casa
    p = "calle123"
    la casa tiene muebles dentro
    caundo haces free(p) es como devolver la casa 
    los muebles podrian seguir ahi pero ya no tienes derecho a entrar
    p = NULL;
    es como romper la nota donde tenias la direccion y escribir no hay direccion
    no destruiste la casa ni borraste los muebles simplemente p ya no tiene una direccion valida

    free(p);
    p = NULL;

    free(p);

    la primer p es memoria liberada y la segunda intentas liberar una memoria ya libeerada
    el double free causa un error "undefined behavior" esto hacee que se crashee el programa y termine ahi 

    sobre NULL 
        NULL no protege del todo, 
            free(p);
            p = NULL;
            printf("%d\n", p[0]);
        estas intentando acceder con un puntero nulo esto rovoca un crash
        el patron sirve principalmente para evitar punteros colgantes
*/

    /// Provocando un error de memoria

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *q = malloc(2 * sizeof(int));

    q[0] = 500;
    q[1] = 600;

    free(q);
    q = NULL;

    printf("%d\n", q[0]);

    return 0;
} 

