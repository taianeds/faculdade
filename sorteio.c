#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;

    srand (time(NULL));

    printf ("%d", rand() %1000);

    return 0;
}
