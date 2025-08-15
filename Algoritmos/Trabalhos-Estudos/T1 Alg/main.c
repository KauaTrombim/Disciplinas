#include <stdio.h>
#include "ponto.h"
#include "circulo.h"

int main()
{
    int xP, yP;
    int xCirc, yCirc, rCirc;

    printf("%f %f", &xP, &yP);
    printf("%f %f %f", &xCirc, &yCirc, &rCirc);

    PONTO *p = ponto_criar(xP, yP);
    CIRCULO *circ = circulo_criar(xCirc, yCirc, rCirc);

    return 0;
}