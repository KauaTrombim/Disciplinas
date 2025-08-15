#ifndef CIRCULO_H
#define CIRCULO_H

#include "ponto.h"

typedef struct circulo_ CIRCULO;
CIRCULO *circulo_criar(int x, int y, float raio);

/*Para evitar que o usuário esqueça de esvaziar o endereço
armazenado no ponteiro, optei por excluir esse valor nessa função*/
void circulo_apagar(CIRCULO **circ);
float circulo_area(CIRCULO *circ);
float distancia(PONTO *p, CIRCULO *c)
/*
Pode ser necessário definir outras operações para o TAD.
Se for o caso, faça e justifique!
*/
#endif
