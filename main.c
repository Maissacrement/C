#include <stdio.h> // Basic lib of C language
#include "Header/calcul.h" // Mes calculs

int main(int argc, int *argv[])
{
    double puissance = power(4);
    int nb = 8;

    globalChange(&nb);

    printf("Power of 4 is %p\n", &puissance);
    printf("Nb has changed to %d, local value update\n", nb);

    return 0;
}
