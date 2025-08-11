#ifndef RACIONAL_H
    #define RACIONAL_H

    typedef struct racional Racional;
    
    void apagar(Racional *r);
    void imprimir(Racional *r);

    Racional *criar(int num, int den);
    Racional *adicao(Racional *r1, Racional *r2);
    Racional *multiplicação(Racional *r1, Racional *r2);

#endif