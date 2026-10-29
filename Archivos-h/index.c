#include <stdio.h>
// permite llamar funciones sin saber su implementacion
#include "archivo.h"// aqui se conecta la interfaz (archivo.h)

int main(void)
{
    int a = 10, b = 3;

    printf("Version del modulo math_utils %d\n", math_utils_version);

    //Aqui se llaman las funciones 
    printf("%d + %d = %d\n", a, b, sumar(a,b));
    printf("%d - %d = %d\n", a, b, restar(a,b));
    printf("%d * %d = %d\n", a, b, multi(a,b));

    return 0;
}