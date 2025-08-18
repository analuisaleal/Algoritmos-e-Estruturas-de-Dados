#ifndef PONTO_H
    #define PONTO_H
	#include <stdbool.h>

    #include "circulo.h"
	
    typedef struct ponto_ PONTO;
    typedef struct circulo_ CIRCULO;
    PONTO *ponto_criar(float x, float y);
    void ponto_apagar(PONTO *p);
    bool ponto_set(PONTO *p, float x, float y);
    void distancia(PONTO* p, CIRCULO* circ);
    /*
    Pode ser necessário definir outras operações para o TAD.
    Se for o caso, faça e justifique!
    */
#endif





