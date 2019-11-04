/******************************************************************************
vaiavel global

deve ser declarada antes de qualquer função 

*******************************************************************************/
#include <stdio.h>

float g = 9.8;

float bolapreta (float,int);
float bolavermelha (float,int);

int main()
{
    int v0 = 0;
    int tp = 5;
    int tv = 3;
    
    bolapreta(v0,tp);
    bolavermelha(v0,tv);
    
    printf("a velocidade final da bola preta é: %.2f m/s,", bolapreta(v0,tp));
    printf("\na velocidade final da bola vermelha é: %.2f m/s,",bolavermelha(v0,tv));

    return 0;
}

float bolapreta(float v0,int t)
{
    int vf;
    
    vf = v0 + g*t;
}

float bolavermelha(float v0,int t)
{
    int vf;
    
    vf = v0 + g*t;
}
