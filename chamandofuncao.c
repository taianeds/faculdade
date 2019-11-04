#include <stdio.h>

void funcao2 (int,int);

int main()
{
    int a;
    int b;
    
    
    printf("digite um número (a) ");
    scanf ("%d", &a);
    
    b=7;
    
    funcao2 (a,b);
    
        return 0;
}

void funcao2 (int c, int d)
{
    printf ("o primeiro eh %d e o segundo eh %d", c,d);
}
