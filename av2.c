/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int matrizAelementos(int,int);
int matrizBelementos(int,int);
double soma(int, int, int, int);
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
   
       
    soma(a,b,c,d);
   
    return 0;
}

soma()
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

double soma(int a, int b, int c, int d)
{
    if (a==c && b==d)
    {
        int matrizA[a][b];
        int matrizB[c][d];
        int y;
        
        matrizA[a][b] = matrizAelementos(int n, int m);
        matrizB[c][d] = matrizBelementos(int o, int p);
        
        printf ("o lemento 1 0 da matriz A eh %d", matrizA [1][0]);
        
        for (y=0; y<a; y++)
        {
            int z;
            for (z=0; z<b;z++)
            {
                
                int soma;
            
                soma = matrizA[y][z] + matrizB [y][z];
            
                printf("\n%d", soma);
            
                
            }
        }
        
    }
    else
    {
        printf ("\nEsta operação não pode ser realizada pois as matrizes tem dimensoes diferentes");
    }
}
