/*
    La mejor manera de trabajar con archivos
    leer linea a linea con fgets 
*/
#include <stdio.h>

int main(void)
{
    char nombre[20];
    int edad;
    float estatura;

    printf("Ingresa tu nombre: ");
    scanf("%19s", nombre);
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);
    printf("\nIngresa tu estatura: ");
    scanf("%f", &estatura);

    FILE *f = fopen("registro.txt", "a");
    if(f == NULL)
    {
        perror("Error al abrir el archivo: registro.txt\n");
        return 0;
    }
    fprintf(f,"Nombre: %s, Edad: %d, Estatura: %.2f\n", nombre, edad, estatura);
    fclose(f);

    printf("\nREGISTRO GUARDADO, ahora se leera el archivo completo\n");
    f = fopen("registro.txt", "r");
    if(f == NULL)
    {
        perror("Error al abrir el archivo: registro.txt\n");
        return 0;
    }
    char linea[100];
    while(fgets(linea, sizeof(linea), f) != NULL)
    {
        printf("%s", linea);
    }
    fclose(f);

    return 0;
}