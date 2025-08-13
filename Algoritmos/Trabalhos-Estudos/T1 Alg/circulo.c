#include "circulo.h"
#include "ponto.h"
#include <stdlib.h>

#define pi 3.1415

struct circulo_{
    PONTO *p;
    float raio;
};

CIRCULO *circulo_criar(PONTO *p, float raio){
    CIRCULO *c;    
    if(c = (CIRCULO *) calloc(1, sizeof(CIRCULO)) == NULL){
            return NULL;
        }
    c->p = p; //Devo só usar a coordenada do ponto? E se for excluido?
    c->raio = raio;

    return c;
}

void circulo_apagar (CIRCULO **circ){
    if(*circ != NULL){
        free(*circ); //Devo apagar o centro do circulo também?
        *circ = NULL;
    }
}

float circulo_area (CIRCULO* circ){
    if(circ != NULL){
        float area = pi*(circ->raio)*(circ->raio);
        return area;
    }
    return 0.0;
}

/*A escolha dessa função estar aqui é principalmente prática, uma
vez que já importei os "pontos" aqui, estes já são conhecidos no arquivo
e não precisam de novas inserções, o que não aconteceria se essa função
estivesse dentro de "ponto.c"*/
float distancia(PONTO* p, CIRCULO* r) {
    
}