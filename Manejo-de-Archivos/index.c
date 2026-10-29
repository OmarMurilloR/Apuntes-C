/*
#include <stdio.h>

int main(void)
{
    FILE *f = fopen("archivo.txt","w");
    if(f == NULL)
    {
        printf("Error no se pudo abrir el archivo.txt\n");
        return 0;
    }

    fprintf(f,"Hola Mundo\n");
    fprintf(f,"HELLO WORLD\n");
    fclose(f);

    //si vuelvo abrir el archivo se elimina el contenido que tenia
    //f = fopen("archivo.txt","w");
    //fprintf(f,"Me llamo Hector\n");
    //fclose(f);

    f = fopen("archivo.txt","a");
    if(f == NULL)
    {
        printf("Error al abrir el archivo.txt\n");
        return 0;
    }
    fprintf(f,"Estoy agregando una linea con append\n");
    fclose(f);

    printf("Listo se escribio en el archivo.txt\n");
    return 0;
} */

#include <stdio.h>

int main(void)
{
    //Parte 1: escribir datos con formato
    FILE *f = fopen("personas.txt","w");
    if(f == NULL)
    {
        printf("Error al abrir el archivo: personas.txt\n");
        return 0;
    }
    fprintf(f,"Nombre: Hector | Edad: 19\n");
    fprintf(f,"Nombre: Diego | Edad: 20\n");
    fprintf(f,"Nombre: Carlos | Edad: 22\n");
    fclose(f);

    //Parte 2: Leer datos formateados con fscanf
    f = fopen("personas.txt","r");
    if (f == NULL)
    {
        printf("Error al abrir el archivo: personas.txt\n");
        return 0;
    }
    
    printf("Lectura con fscanf\n");
    char nombre[25];
    int edad;
    while(fscanf(f,"%24s %d", nombre, &edad) == 2)
    {
        printf("Nombre: %24s | Edad:; %d", nombre, edad);
    }
    fclose(f);

    //Parte 3: lectura linea por linea usando fgets
    f = fopen("personas.txt","r");
    if (f == NULL)
    {
        printf("Error al abrir el archivo: personas.txt\n");
        return 0;
    }
    printf("Lectura linea por linea usando fgets:\n");
    char linea[75];
    while(fgets(linea, sizeof(linea), f) != NULL)
    {
        printf("Linea: %s", linea);
    }
    fclose(f);

    // Lectura caracter por caracter con getc:
    /* Se utiliza cuando se quiere procesar texto muy finamente, "fgetc" devuelve el valor int no char
       para poder representar EOF (End of file) por esta razon es int, si fuera char, podrias confundir un caracter validdo con EOF*/ 
    
    f = fopen("personas.txt","r");
    if( f == NULL)
    {
        printf("Error al abrir el archivo: personas.txt\n");
        return 0;
    }
    printf("Lectura caracter por caracter con getc\n");
    int a;
    while((a = fgetc(f)) != EOF)
    {
        putchar(a); //Imprime el caracter leido
    }
    fclose(f);
    printf("Se terminno el programa correctamente\n");
    return 0;
}