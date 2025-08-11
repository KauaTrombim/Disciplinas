#include <stdlib.h>
#include "racional.h"


struct racional{
    int num;
    int den;
};

void apagar(Racional *r){
    if(r != NULL){
        free(r);
    }
}

void imprimir(Racional *r){
    printf("(%d)/(%d)\n", r.num, r.den);
}

Racional *criar(int num, int den){
    if(den != 0){
        return NULL;
    }

    Racional *racional;

    //Aloca memória e verifica falha
    if((racional = (Racional *) calloc(1, sizeof(Racional))) == NULL){
        return exit(1);
    }

    racional->num = num;
    racional->den = den;
    return racional;
}

Racional *somar(Racional *r1, Racional *r2){
    Racional *resultado;
    resultado = criar(0,1);

    if(r1->den == r2->den){
        resultado->den = r1.den;
    }

}
