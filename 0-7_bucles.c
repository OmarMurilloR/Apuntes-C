/* Ejercicio deteniendo un bucle (version mia)
#include <stdio.h>

int main(void)
{
    int i;
    for(i = 1; i < 11; i++)
    {
        if(i > 0 && i < 6)
        {
            printf("%d\n",i);
        }
    }
    return 0;
} 

(Version del profesor)
#include <stdio.h>

int main(void)
{
    int i;
    for(i = 1; i < 11; i++)
    {
        if (i == 6)
        {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
} 

///////////// Ejercicio para saltar un numero

#include <stdio.h>

int main(void)
{
    int i;
    for(i = 1; i < 11; i++)
    {
        if(i == 5)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
} 

/////// Imprime del 1 al 10 usando while

#include <stdio.h>

int main(void)
{
    int i = 1;
    while (i < 11)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
} 

////// Ejercicio que detiene un bucle con while

#include <stdio.h>

int main(void)
{
    int i = 1;
    while (i < 11)
    {
        if(i == 6)
        {
            break;
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
} 

///////Imprime del 1 al 10 usando do while

#include <stdio.h>

int main(void)
{
    int i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 11);
    
    return 0;
} 

////// Ejercicio que salta el 5 usando do while

#include <stdio.h>

int main(void)
{
    int i = 1;
    do
    {
        if(i == 5)
        {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    } while (i < 11);
    

    return 0;
} 

//// Muestra las tablas de multiplicar del 1 al 5 usando for anidado

#include <stdio.h>

int main(void)
{
    int i, j;
    //tablas de multiplicar del 1 al 5
    for(i = 1; i < 6; i++)
    {
        for (j = 1; j < 11; j++)
        {
            int resultado = i * j;
            printf("%d", resultado);
        }
        printf("\n");
    }

    return 0;
} 
    //////Ejercicio que muestra un menu, te da 3 opciones 
    1) par o impar
    2) da la tabla de multiplicar de ese numero
    3) salir
    si no eliges la opcion 3 te vuelve aparecer el primer menu hasta que decidas salir

#include <stdio.h>

int main(void)
{
    int opcion;
    //Muestra el Menu
    printf("Elige una de las siguientes opciones:\n");
    printf("1) Determina si el numero es Par o Impar\n");
    printf("2) Muestra las tablas de multiplicar de tu numero\n");
    printf("3) Salir del programa\n");
    //Guarda la opcion del usuario
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1: // Determina si el numero es par o impar
        int residuo;
        printf("Ingresa el numero que deseas ver si es par o impar: ");
        scanf("%d", &residuo);
       
        do
        {
            residuo / 2;
        } while (residuo > 1);
        
        if(residuo == 0)
        {
            printf("El numero es par\n");
        }
        else if (residuo == 1 || residuo < 0)
        {
            printf("El numero es impar\n");
        }
        else 
        {
            printf("Error");
        }
        break;

    case 2: // Tablas de multiplicar
        int numero, i;
        printf("Ingresa el numero que deseas ver sus tablas de multiplicar: ");
        scanf("%d\n", &numero);
        
        for(i = 1; i < 11; i++)
        {
            int resultado = i * numero;
            printf("%d x %d = %d \n", i, numero, resultado);
        }
        break;
        
    case 3: //Sale del programa
        printf("Saliendo....");
        break;
    default:
        printf("Opcion Invalida.....");
        break;
    }
    return 0;
} */

#include <stdio.h>

int main(void)
{
    int opcion, numero, i;
    do
    {
        printf("Menu:\n");
        printf("1)Verificar si un numero es par o impar\n");
        printf("2)Imprime la tabla de multiplicar del numero que le indiques\n");
        printf("3) Salir\n");
        printf("Elige una opcion:\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            
            printf("Ingresa un numero entero\n");
            scanf("%d", &numero);
            if (numero % 2 == 0)
            {
                printf("El numero es par\n");
            }
            else
            {
                printf("El numero es impar\n");
            }
            
            break;
        case 2:
            printf("Ingresa un numero:\n");
            scanf("%d", &numero);
            for (i = 1; i < 11; i++)
            {   
                printf("%d x %d = %d\n", numero, i, numero * i);
            }
            
            break;
        case 3:
            printf("Saliendo.....");
            break;
        
        default:
            printf("Opcion invalida\n");
            break;
        }
    } while (opcion != 3);
    

    return 0;
}