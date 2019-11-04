/******************************************************************************
variavel global

deve ser declarada antes de qualquer função 

*******************************************************************************/
#include <stdio.h>

int g = 9;

void funcao2 (int);

int main()
{
    int a;
    int b;
    
    
    printf("dentro do main ");
    printf ("\na = %d,g = %d", a,g);
    
    
    funcao2(a);
    
        return 0;
}

void funcao2(int c)
{
    int a = 7;
      printf("\n\ndentro do funcao2 ");
    printf ("\na = %d,g = %d", a,g);
}
