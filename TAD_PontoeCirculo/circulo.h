#ifndef CIRCULO_H
    #define CIRCULO_H

    #include "ponto.h"

    typedef struct circulo_ CIRCULO;
    typedef struct ponto_ PONTO;
    CIRCULO *circulo_criar(PONTO *p, float raio);
    void circulo_apagar (CIRCULO* circ);
    float circulo_area (CIRCULO* circ);

    /*
    Pode ser necessário definir outras operações para o TAD.
    Se for o caso, faça e justifique!
    */
   PONTO* circulo_get_centro(CIRCULO* c); // usarei essa função para que não seja possivel acessar diretamente o centro e o raio da circunferencia (encapsulamento)
   float circulo_get_raio(CIRCULO* c);
#endif


