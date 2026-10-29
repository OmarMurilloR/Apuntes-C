#include <stdio.h>

struct cosa{
    int a, b;
};

int main(void)
{
    struct cosa cosas[3] = {
        {5,8},{2,1},{9,0}
    };
    FILE *f = fopen("cosas.bin", "wb");
    if(f == NULL)
    {
        perror("Error al abrir cosas.bin\n");
        return 0;
    }
    size_t texto = fwrite(cosas, sizeof(struct cosa), 3, f);
    fclose(f);
    if(texto != 3)
    {
        perror("No se escribrieron todos los elementos\n");
        return 0;
    }
    struct cosa textos[3];
    f = fopen("cosas.bin", "rb");
    if(f == NULL)
    {
        perror("Error no se pudo abrir cosas.bin\n");
        return 0;
    }
    size_t cantidad = fread(textos, sizeof(struct cosa), 3, f);
    fclose(f);
    if(cantidad != 3)
    {
        perror("Error no se leyeron todos los elementos\n");
        return 0;
    }
    printf("Cosas leidas de cosas.bin\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d , %d", textos[i].a, textos[i].b);
    }
    
    return 0;
}