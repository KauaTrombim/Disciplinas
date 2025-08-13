#include <stdio.h>
#include "ponto.h"
#include "circulo.h"

int main(){
    int xP, yP;
    int xCirc, yCirc, rCirc;

    printf("%f %f", &xP, &yP);
    printf("%f %f %f", &xCirc, &yCirc, &rCirc);

    PONTO *p = ponto_criar(xP, yP);
    PONTO *centroCirc = ponto_criar(xCirc, yCirc);
    CIRCULO *circ = circulo_criar(centroCirc, rCirc);

    
    return 0;
}