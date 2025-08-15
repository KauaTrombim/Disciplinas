#ifndef PONTO_H
#define PONTO_H
#include <stdbool.h>

typedef struct ponto_ PONTO;
PONTO *ponto_criar(float x, float y);
/*Assim como no círculo, para evitar que o usuário esqueça de esvaziar o endereço
armazenado no ponteiro, optei por excluir esse valor nessa função*/
void ponto_apagar(PONTO **p);
bool ponto_set(PONTO *p, float x, float y);

/*Foram inseridas 2 novas funções que retornam o valor x ou t de um ponto para
cáculo da distância, uma vez que conceitualmente não podemos acessar os valores
do TAD diretamente */
float ponto_getX(PONTO *p);
float ponto_getY(PONTO *p);

/*
Pode ser necessário definir outras operações para o TAD.
Se for o caso, faça e justifique!
*/
#endif
