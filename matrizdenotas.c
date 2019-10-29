/*****************************************************************************

ler o resultado e apresentar matriz ARRUMAR

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    int j;
    float temp;
    
    int numeroalunos = 5;
    int numeronotas = 4;

    float matriz [numeroalunos][numeronotas];
    float vetormedia [5];

    // [0][][][][]
    // [1][][][][]
    // [2][][][][]
    // [3][][][][]
    
    for(i=0; i<numeroalunos; i++)
    {
        for(j=0; j<numeronotas; j++)
        {
            printf("\ndigite a nota %d do aluno %d:", j+1, i+1);
            scanf("%f", &temp);
            // printf ("\n");
            // printf("%d", temp);

            matriz [i][j] = temp;

            printf("\n===================\n");
            int v,t,r,c;
            r=numeroalunos;
            c=numeronotas;
            for(v=0;v<r;v++)
            {
                for(t=0;t< c;t++)
                {
                    printf("%1f\t",matriz[v][t]);
                }
                printf("\n");  
            }
        }
        float nota=0;
        int posicao=0;
        float media=0;
        for(posicao=0;posicao<numeronotas;posicao++){
            nota+=matriz[i][posicao];
        }
        media=nota/numeronotas;
        printf("media do aluno %d eh: %.2f\n", i+1, media);

        vetormedia[i] = media;

    }
    int aluno=0;
    for (aluno=0; aluno<numeroalunos; aluno++)
    {
        printf ("a media do aluno %d eh %.2f\n", aluno+1, vetormedia[aluno]);
    }
    
    return 0;
        
}
