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

    free(p);
    p = NULL;

    return 0;
}