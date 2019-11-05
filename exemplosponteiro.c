#include <stdio.h>

void funcao(int *);

int main() 
{
	//Declaração de variáveis
	int numero;
    
    printf ("digite um numero ");
    scanf ("%d",&numero);
    printf (" o valor do numero eh %d", numero);
    
    funcao (&numero);
	printf("\no valor do numero eh %d", numero);
			
}

void funcao(int *nptr)

{
    *nptr= *nptr  * *nptr * *nptr;
}
	
  
  
