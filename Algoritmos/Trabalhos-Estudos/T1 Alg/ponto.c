#include "ponto.h"
#include <stdlib.h>

struct ponto_
{
    float x;
    float y;
};

PONTO *ponto_criar(float x, float y)
{
    PONTO *p;
    if ((PONTO *)calloc(1, sizeof(PONTO)) == NULL)
    {
        return NULL;
    }
    p->x = x;
    p->y = y;

    return p;
}

void ponto_apagar(PONTO **p)
{
    if (*p != NULL)
    {
        free(*p);
        *p = NULL;
    }
}

bool ponto_set(PONTO *p, float x, float y)
{
    if (p != NULL)
    {
        p->x = x;
        p->y = y;

        return p;
    }
}

float ponto_getX(PONTO *p){
    return p->x;
}

float ponto_getY(PONTO *p){
    return p->y;
}
