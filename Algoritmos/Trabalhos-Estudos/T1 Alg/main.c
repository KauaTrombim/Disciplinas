#include <stdio.h>
#include "ponto.h"
#include "circulo.h"

int main()
{
    float xP, yP;
    float xCirc, yCirc, rCirc;

    scanf("%f %f", &xP, &yP);
    scanf("%f %f %f", &xCirc, &yCirc, &rCirc);

    PONTO *p = ponto_criar(xP, yP);
    CIRCULO *circ = circulo_criar(xCirc, yCirc, rCirc);

    // --- VERIFICAÇÃO ESSENCIAL #1 ---
    if (p == NULL) {
        printf("Erro: Falha ao alocar memoria para o ponto.\n");
        return 1; // Termina o programa com um código de erro
    }

    // --- VERIFICAÇÃO ESSENCIAL #2 ---
    if (circ == NULL) {
        printf("Erro: Falha ao alocar memoria para o circulo.\n");
        ponto_apagar(&p); // Limpa a memória que já foi alocada
        return 1; // Termina o programa com um código de erro
    }

    float dist = distancia(p, circ);
    float raio = circulo_getRaio(circ);

    if(dist <= raio){
        printf("O ponto é interior à circunferência.\nDistância: %.2f\n", dist);
    }
    if(dist == raio){
        printf("O ponto pertence à circunferência.\nDistância: %.2f\n", dist);
    }
    else{
        printf("O ponto é exterior à circunferência.\nDistância: %.2f\n", dist);
    }

    return 0;
}