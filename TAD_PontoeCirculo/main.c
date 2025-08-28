
#include <stdio.h>
#include "ponto.h"

int main(){
    PONTO* p;
    CIRCULO* c;
    float px,py, cx,cy,raio;
    scanf("%f %f",&px,&py);
    scanf("%f %f %f",&cx,&cy,&raio);

    p=ponto_criar(px,py);
    c=circulo_criar(ponto_criar(cx,cy),raio);

    distancia(p,c);
    
    ponto_apagar(p);
    circulo_apagar(c);

    return 0;
}