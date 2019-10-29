/*****************************************************************************

Criar um programa que tenha uma matriz 5x4. Cada linha dessa matriz representa um aluno e cada coluna a sua nota.
apos, o programa devera apresentar a media de cada aluno, mostrar qual foi a menor nota (e de que aluno) e qual foi a maior nota (e qual o aluno)
*******************************************************************************/
#include <stdio.h>

int main()
{
//definicao de variaveis
    int i;
    int j;
    float temp;
    
    int numeroalunos = 5;
    int numeronotas = 4;

    float matriz [numeroalunos][numeronotas];
    float vetormedia [5];

//coleta de notas e armazenamento na matriz
    for(i=0; i<numeroalunos; i++)
    {
        for(j=0; j<numeronotas; j++)
        {
            printf("\ndigite a nota %d do aluno %d:  ", j+1, i+1);
            scanf("%f", &temp);

            matriz [i][j] = temp;

// print para entender a interacao da matriz (nao necessario no codigo para o resultado final )

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

//media das notas coletadas
        float nota=0;
        int posicao=0;
        float media=0;
        for(posicao=0;posicao<numeronotas;posicao++){
            nota+=matriz[i][posicao];
        }
        media=nota/numeronotas;

        vetormedia[i] = media;

    }
//armazenamento das medias
    int aluno=0;
    for (aluno=0; aluno<numeroalunos; aluno++)
    {
        printf ("\na media do aluno %d eh %.2f\n", aluno+1, vetormedia[aluno]);
    }
//classificacao da maior e menor media 
    int posicaoaluno;
    int posicaomenor=0;
    float menornota=999;
    float maiornota=0;
    int posicaomaior=0;
    for (posicaoaluno=0; posicaoaluno<numeroalunos; posicaoaluno++)
    {
        if(vetormedia[posicaoaluno]<menornota)
        {
            menornota=vetormedia[posicaoaluno];
            posicaomenor=posicaoaluno;
        }
        if(vetormedia[posicaoaluno]>maiornota)
        {
            maiornota=vetormedia[posicaoaluno];
            posicaomaior=posicaoaluno;
        }
    }
//apresentacao do resultado final
    printf ("\na menor media eh %.2f do aluno %d\n", menornota, posicaomenor+1);
    printf ("a maior media eh %.2f do aluno %d", maiornota, posicaomaior+1);

    return 0;
        
}
