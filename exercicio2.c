// 1) Programa em C que faça leitura de um número e informe que número foi digitado

#include <stdio.h>

int main()
{
    int numero;

    printf("digite um numero ");
    scanf("%d",&numero);
    printf("O numero digitado foi %d\n", numero);
 //2) Fazer leitura de um número e informar se ele é par ou ímpar
    int n;
    printf("\ndigite um numero ");
    scanf("%d",&n);
    if((n%2) ==0)
    {
        printf ("o numero %d eh par\n", n);
    }
    else
    {
        printf("o numero %d eh impar\n", n);
    }
//3) Pedir para o usuário digitar o divisor e dividendo de uma divisão, depois informar o quociente e resto
    int divisor;
    int dividendo;
    int resto;
    int quociente;

    printf("\ndigite o divisor ");
    scanf("%d", &divisor);
    printf("\ndigite o dividendo ");
    scanf("%d", &dividendo);

    quociente = divisor / dividendo;
    resto = divisor % dividendo;
    printf("\no quociente eh %d e o resto eh %d\n", quociente, resto);
//4) Pedir para o usuário digitar um número. Escrever na tela os números de 0 até o número digitado
     int i;
     int j;

    printf("\ndigite um numero \n");
    scanf("%d",&j);
    for (i=0; i<=j; i++)
    {
        printf ("%d\t",i);
    }
//5) Criar uma FUNÇÃO que receba dois números digitados pelo usuário que faça a soma e devolva para o programa principal, depois escrever na tela o resultado.
    int n1;
    int n2;
    int soma;

    printf("\ndigite o primeiro numero da soma ");
    scanf("%d", &n1);
    printf("\ndigite o segundo numero da soma ");
    scanf("%d", &n2);

    soma = n1+n2;
    printf("\no resultado da soma eh %d\n", soma);

    return 0;
}
