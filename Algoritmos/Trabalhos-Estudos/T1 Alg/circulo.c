#include "circulo.h"
#include "ponto.h"
#include <stdlib.h>
#include <math.h>

#define pi 3.1415

struct circulo_
{
    PONTO *p;
    float raio;
};

CIRCULO *circulo_criar(float x, float y, float raio)
{
    PONTO *centro = ponto_criar(x, y);
    CIRCULO *c;
    if ((c = (CIRCULO *)calloc(1, sizeof(CIRCULO))) != NULL)
    {
        c->p = centro;
        c->raio = raio;
    }

    return c;
}

void circulo_apagar(CIRCULO **circ)
{
    if (*circ != NULL)
    {
        ponto_apagar(&(*circ)->p);
        free(*circ);
        *circ = NULL;
    }
}

float circulo_area(CIRCULO *circ)
{
    if (circ != NULL)
    {
        float area = pi * (circ->raio) * (circ->raio);
        return area;
    }
    return 0.0;
}

/*A escolha dessa função estar aqui é principalmente prática, uma
vez que já importei os "pontos" aqui, estes já são conhecidos no arquivo
e não precisam de novas inserções, o que não aconteceria se essa função
estivesse dentro de "ponto.c"*/
float distancia(PONTO *p, CIRCULO *c)
{
    float x, y, distanciaTotal;

    x = ponto_getX(p) - circulo_getX(c);
    y = ponto_getY(p) - circulo_getY(c);

    x *= x;
    y *= y;

    distanciaTotal = sqrt(x + y);
    return distanciaTotal;
}

float circulo_getX(CIRCULO *c){
    float x = ponto_getX(c->p);
    return x;
}

float circulo_getY(CIRCULO *c){
    float y = ponto_getY(c->p);
    return y;
}

float circulo_getRaio(CIRCULO *c){
    return c->raio;
}