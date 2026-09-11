#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //bool n = true;
    bool n = (10 > 5);
    bool m = (3 > 5);
    printf("%d\n", !n);
    printf("%d", !m);
    
    return 0;
}