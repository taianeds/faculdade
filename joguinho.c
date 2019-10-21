/* fazer um codigo que peca para digitar um numero e depois compare o numero com um numero aletorio sortedo e apresente se o numero digitado eh maior, menor ou igual ao sorteado*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int n;
    int r;

    printf ("digite um numero ");
    scanf ("%d", &n);

    srand (time(NULL));

    r= rand() % 1000;

    printf ("o numero sorteado eh %d", r);


    if (r>n)
    {
        printf ("\no numero digitado eh menor que o sorteado");
    }
    if (r<n)
    {
        printf ("\no numero digitado eh maior que o sorteado");
    }
    if (n==r)
    {
        printf ("\nParabéns, Você acertou!");
    }

    return 0;
}
