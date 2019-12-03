#include <stdio.h>
int matrizAelementos(int,int);
int matrizBelementos(int,int);
array soma(void);
int a, b;
int c, d;

int main()
{
    
    printf("digite a dimensão da matriz A  ");
    scanf ("%d %d", &a, &b);
    
    matrizAelementos(a,b);
    
    
    printf("\ndigite a dimensão da matriz B  ");
    scanf ("%d %d", &c, &d);
    
    matrizBelementos(c,d);
   
   int soma;
   
   soma(void);
   
    return 0;
}


int matrizAelementos(int n, int m)
{
    
    int matrizA [n][m];
    int i;
    
    for(i=0; i<n; i++)
    {
        int j;
        for(j=0; j<m; j++)
        {
            printf("\nDigite o elemento %d %d da Matriz A ", i, j);
            scanf ("%d", &matrizA [i][j]);
            printf ("O elemento %d %d da matriz A eh %d", i, j, matrizA [i][j]);
        }
    }

}

int matrizBelementos(int p, int q)
{
    
    int matrizB [p][q];
    int i;
    
    for(i=0; i<p; i++)
    {
        int j;
        for(j=0; j<q; j++)
        {
            printf("\nDigite o elemento %d %d da Matriz B ", i, j);
            scanf ("%d", &matrizB [i][j]);
            printf ("O elemento %d %d da matriz B eh %d", i, j, matrizB [i][j]);
        }
    }

}

array soma(int a, int b, int c, int d)

if (a=c && b=d)
{
    soma = matrizA [i][j] + MatrizB [i][j];
}
