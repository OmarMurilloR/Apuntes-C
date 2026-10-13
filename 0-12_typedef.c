/* #include <stdio.h>

typedef int entero;

int main(void)
{
    entero a = 6, b = 2;
    printf("tamanio en bytes de un numero entero: %d\n", sizeof(entero));
    entero s = a + b;
    printf("\nLa suma es: %d\n", s); 

    return 0;
} 


#include <stdio.h>
#include <math.h>

struct complejo{
    float real;
    float imaginario;
    float modulo;
};
typedef struct complejo;

int main(void)
{
    struct complejo nroCom;
    printf("Ingresa la parte real:\n");
    scanf("%f", &nroCom.real);

    printf("Ingresa la parte imaginaria:\n");
    scanf("%f", &nroCom.imaginario);

    printf("Real = %f | Imaginatio = %f\n", nroCom.real, nroCom.imaginario);
    ///Calculamos el modulo

    nroCom.modulo = sqrt(nroCom.real * (nroCom.real + (nroCom.imaginario * nroCom.imaginario)));

    printf("El modulo es: %f\n", nroCom.modulo);

    return 0;
} 


/*
#include <stdio.h>

typedef char barajaEspaniola[15];

int main(void)
{
    barajaEspaniola p[4] = {"oro","espada","copas", "bastos"};
    printf("%s", p[0]);

    return 0;
} */

#include <stdio.h>
#include <math.h>

typedef struct complejo{
    float p_real;
    float p_imaginaria;
    float modulo;
}nroComplejo;

//puede tener 2 apodos
//typedef struct complejo nroComplejo;

int main(){
    //Crea una variable llamada nroCom que es de tipo struct complejo
    nroComplejo nroCom;
   // struct complejo nroCom;
    printf("Ingrese la parte real: ");
    scanf("%f", &nroCom.p_real);
    printf("ingrese la parte imaginaria: ");
    scanf("%f",&nroCom.p_imaginaria);

    //calculamos el modulo
    nroCom.modulo = sqrt(nroCom.p_real * (nroCom.p_real + nroCom.p_imaginaria * nroCom.p_imaginaria));
    printf("\nEl modulo es: %f",nroCom.modulo);
    return 0;
} 