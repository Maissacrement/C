#include "../Header/calcul.h" // Get prototype


// =========Function==========
/*
    Get the power of nb in params
    @params:
        -nb : Double
*/

double power(double nb)
{
    return nb * nb;
}

// ========Procedure==========

void globalChange(int *pointeurNb)
{
    *pointeurNb += 5;
}