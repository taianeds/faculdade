/*Fazer um codigo que organize o vetor {4,7,9,3,5,8} em ordem crescente */

#include <stdio.h>

int main()
{
 //declaracao de variaveis
    int vetor [6] = {4, 7, 9, 3, 5, 8}; // vetor inicial
    int novovetor [6]; //vetor final
    int a;
    int menortotal=0;
    for (a=0; a<6; a++) 
    {   
        int menoratual=999;
        printf("\nInteiracao %d",a+1);
        int y;
        for (y=0; y<6; y++)
        {
            
            printf("\ncomparando a posicao %d  ", y);
            if(vetor[y]<menoratual && vetor[y]>menortotal)
            {
                printf("%d eh menor que %d", vetor[y], menoratual);
                menoratual=vetor[y];
            }
        }
        menortotal=menoratual;
        printf("\nmenor eh %d\n", menortotal);

        novovetor[a]=menortotal;
    }
    


    printf("\nnovo vetor organizado\n");
    int x;
    for (x = 0; x < 6; x++)
    {
        printf("novovetor[%d] = %d\n", x, novovetor[x]);    
    }
    return 0
}
