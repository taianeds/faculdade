/******************************************************************************
fazer um codigo que calcula a media dos reabastecimentos e ao final apresente a media de todos os reabastecimentos
*******************************************************************************/
#include <stdio.h>

int main()
{
    float q;
    float l;
    float somaq;
    float somal;
    float reabastecimento;
    float total;
    int numero_abastecimento;
    
    somaq=q;
    somal=l;
    
    int flag_while=0;
    while(flag_while==0)
    {
        printf("\n\ndigite a quilometragem e a quantidade de litros, para apresentar a media final digite \"0 0\" \n");
        scanf ("%f %f", &q, &l);
        if (q!=0)
        {
            numero_abastecimento++;
            reabastecimento = q / l;
            
            printf("\na quilometragem por litro do abastecimento %d eh %.2f", numero_abastecimento, reabastecimento);
            
            somaq = somaq + q;
            somal = somal + l;
        
            total = somaq / somal;
            
        }
        else
        {
            flag_while=1;
        }
    }
    printf("\na media de quilometros por litros eh %.2f", total);
    
    return 0;
}
