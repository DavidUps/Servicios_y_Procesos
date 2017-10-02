#include <stdlib.h>
#include <stdio.h>
#include "suma.h"

int main()
{
    int op1;
    int op2;

    printf("Elige números: ");
    scanf("%i %i", &op1, &op2);
    printf("La suma es: %i\n", suma(op1,op2));

    return EXIT_SUCCESS;
}


