#include <stdio.h>

int main()
{
    float c;
    float k;
    float f;

    printf( "digite a temperatura em graus Celsius:  ");
    scanf("%f", &c);

    k = (c+273);
    f = (1.8*c)+32;

    printf ("\na temperatura %.2f graus Celsius equivale a: \n", c);
    printf ("%.2f graus Kelvin\n", k);
    printf ("%.2f graus Fahrenheit", f);
    
    return 0;
}
