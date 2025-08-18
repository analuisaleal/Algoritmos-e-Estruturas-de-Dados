#include "ponto.h"
#include "circulo.h"

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct ponto_{
    float x;
    float y;
};


PONTO* ponto_criar(float x, float y){
    PONTO* p;
    if((p = (PONTO*)malloc(sizeof(PONTO)))== NULL){
        return NULL;;
    }
    p->x=x;
    p->y=y;
    return p;
}

void ponto_apagar(PONTO* p){
    if(p != NULL){
        free(p);
    }
}

bool ponto_set(PONTO *p, float x, float y){
    p->x=x;
    p->y=y;
}

void distancia(PONTO* p, CIRCULO* c){
    PONTO* centro = circulo_get_centro(c);
    float raio= circulo_get_raio(c);
    float x2x1= p->x - centro->x;
    float y2y1= p->y - centro->y;
    float dist= sqrt(x2x1*x2x1 + y2y1*y2y1);

    if(dist > raio)
    printf("O ponto é exterior à circunferência.\nDistância: %.2f\n", dist);
    if(dist < raio)
        printf("O ponto é interior à circunferência.\nDistância: %.2f\n", dist);
    if(dist == raio)
        printf("O ponto pertence à circunferência.\nDistância: %.2f\n", dist);
        
}