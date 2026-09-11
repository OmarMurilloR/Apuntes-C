#include <stdio.h>

int main(void)
{
    int i;
    printf("Ingresa tu edad:");
    scanf("%d", &i);

    if( i <= 0)
    {
        printf("\nNo puedes tener una edad negativa");
    }
    else if((i > 0) && (i < 18))
    {
        printf("Eres menor de edad");
    }
    else if((i >= 18) && (i <= 20))
    {
        printf("Eres mayor de edad pero no puedes tomar");
    }
    else {
        printf("Eres mayor de edad y puedes tomar");

    }
    return 0;
}
