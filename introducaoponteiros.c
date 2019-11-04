/******************************************************************************
quando tem * ele tem permissão para entrar na casa
quando nao tem o * ele só mostra onde é a casa

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main() 
{
	//Declaração de variáveis
	int a;
	int *aPtr;
	
	//Inicialização de variáveis
	a = 7;
	aPtr = &a;	//A variável aPtr recebe o "endereço" de "a"
	
	printf("O endereco de a eh %p\n"
			"O valor de aPtr eh %p\n\n", &a, aPtr);
			
	printf("O valor de a eh %p\n"
			"O valor de *aPtr eh %p\n\n", a, *aPtr);
			
	printf("Sabendo que * e & complementam-se mutualmente."
			"\n&*aPtr = %p\n*&aPtr = %p\n\n",
			&*aPtr, *&aPtr);
			
	//system("PAUSE");
	return 0;
}
