{
 //declaracao de variaveis
    int vetor [6] = {4,67,22,3,44,1}; // vetor inicial
    int novovetor [6]; //vetor final
    int a;
    int menortotal=0;
    
    printf ("vetor %d %d %d %d %d %d \n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], vetor[5]);
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
    return 0;
}
