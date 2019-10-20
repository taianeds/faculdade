#include <stdio.h>

int main()
{
 //declaracao de variaveis
    int n; 
    int menoratual; 
    int maioratual;
    int a;
    
    menoratual= 999;
    maioratual = 0;
    
    printf ("digite 5 numeros entre 0 e 999:\n");
   
    for (a=1; a<6; a++) 
    {  
        scanf ("%d", &n);
        
        if(menoratual>n)
        {
            menoratual=n;
        }
        if(maioratual<n)
        {
            maioratual=n;
        }
    }
     printf ("o numero menor eh %d e o maior eh %d", menoratual, maioratual);
    
    return 0;
}    
