#include "circulo.h"
#include "ponto.h"

#include <stdlib.h>
#include <stdio.h>

#define PI 3.14

struct circulo_{
    PONTO* p;
    float raio;
};

CIRCULO *circulo_criar(PONTO *p, float raio){
   if(p== NULL || raio<=0){
    return NULL;
   }
    CIRCULO* circ;
    if ((circ = malloc(sizeof(CIRCULO))) == NULL) {
    return NULL;
}
    circ->p=p;
    circ->raio=raio;
    return circ;
}

void circulo_apagar (CIRCULO* circ){
    if(circ != NULL){
        free(circ);
    }
}

float circulo_area(CIRCULO* circ){
    if(circ == NULL || circ->raio <=0){
        return 0;
    }
    else{
        return PI *(circ->raio * circ->raio);
    }

}

PONTO* circulo_get_centro(CIRCULO* c) {
    return c->p;
}

float circulo_get_raio(CIRCULO* c) {
    return c->raio;
}