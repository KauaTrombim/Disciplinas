#ifndef PONTO_H
#define PONTO_H
#include <stdbool.h>

typedef struct ponto_ PONTO;
PONTO *ponto_criar(float x, float y);
/*Assim como no círculo, para evitar que o usuário esqueça de esvaziar o endereço
armazenado no ponteiro, optei por excluir esse valor nessa função*/
void ponto_apagar(PONTO **p);
bool ponto_set(PONTO *p, float x, float y);

/*
Pode ser necessário definir outras operações para o TAD.
Se for o caso, faça e justifique!
*/
#endif
