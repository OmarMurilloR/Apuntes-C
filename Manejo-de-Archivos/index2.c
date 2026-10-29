#include <stdio.h>

int main(void)
{
    FILE *f = fopen("personas2.txt", "w");
    if(f == NULL)
    {
        printf("Error no se pudo abrir el archivo: personas2.txt\n");
        return 0;
    }
    fprintf(f,"Miguel 21 Estatura: 1.70\n");
    fprintf(f,"Jose 20 Estatura: 1.84\n");
    fprintf(f,"Gustavo 20 Estatura: 1.76\n");
    fclose(f);

    f = fopen("personas2.txt", "r");
    if(f == NULL)
    {
        printf("Error no se pudo abrir el archivo: personas2.txt para lectura\n");
        return 0;
    }
    
    printf("Lectura con fscanf\n");
    char nombre[20];
    int edad;
    char texto[11];
    float estatura;

    while(fscanf(f,"%19s %d %10s %f", nombre, &edad, texto, &estatura) == 4)
    {
        printf("Nombre: %s | Edad: %d | Estatura: %f\n", nombre, edad, estatura);
    } 
    fclose(f);
    /*
    f = fopen("personas2.txt", "w");
    if(f == NULL)
    {
        printf("Error al abrir el archivo: personas2.txt\n");
        return 0;
    }
    fprintf(f,"Nombre: Miguel | Edad: 21 | Estatura: 1.70\n");
    fprintf(f,"Nombre: Jose | Edad: 20 | Estatura: 1.84\n");
    fprintf(f, "Nombre: Gustavo | Edad: 20 | Estatura: 1.76\n");
    fclose(f);

    f = fopen("personas2.txt", "r");
    float altura;
    printf("Leyendo con fscanf\n");
    while(fscanf(f,"%19s %d %f", nombre, &edad, &altura) == 3)
    {
        printf("%19s %d %.2f\n", nombre, edad, altura);
    }
    fclose(f);
    */
    printf("Fin del programa\n");

    return 0;
}