#ifndef CIRCULO_H
#define CIRCULO_H

#include "ponto.h"

typedef struct circulo_ CIRCULO;
CIRCULO *circulo_criar(float x, float y, float raio);

/*Para evitar que o usuário esqueça de esvaziar o endereço
armazenado no ponteiro, optei por excluir esse valor nessa função*/
void circulo_apagar(CIRCULO **circ);
float circulo_area(CIRCULO *circ);

/*Foram inseridas 2 novas funções que retornam o valor x ou t de um ponto para
cáculo da distância, uma vez que conceitualmente não podemos acessar os valores
do TAD diretamente */
float circulo_getX(CIRCULO *c);
float circulo_getY(CIRCULO *c);

//Essa função retorna o raio para cálculo da distância
float circulo_getRaio(CIRCULO *c);

//A explicação para essa função estar aqui está no arquivo .c
float distancia(PONTO *p, CIRCULO *c);
/*
Pode ser necessário definir outras operações para o TAD.
Se for o caso, faça e justifique!
*/
#endif
