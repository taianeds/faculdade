#include <stdio.h>

int main()
{
    int x;
    int resto;

    x = 1;

    while (x < 100)
    {
        resto = x % 2;

        if (resto == 0)
        {
            printf("\n%d eh par", x);
        }
        else
        {
            printf("\n%d eh impar", x);
        }

        x = x + 1;
    }
    return 0;
}