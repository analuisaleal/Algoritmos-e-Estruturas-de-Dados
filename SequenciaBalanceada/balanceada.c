#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include "item.h"
#include "Pilha.h"

bool balanceada(char *sequencia) {
    PILHA* p = pilha_criar();
    char c;
    ITEM* item_topo;

    for (int i = 0; sequencia[i] != '\0'; i++) {
        c = sequencia[i];

        if (c == '(' || c == '{' || c == '[') {
            ITEM* novo_item = item_criar(c);
            if (novo_item == NULL) {
                pilha_apagar(&p);
                return false;
            }
            pilha_empilhar(p, novo_item);

        } else if (c == ')' || c == '}' || c == ']') {
            if (pilha_vazia(p)) {
                pilha_apagar(&p);
                return false;
            }
            
            item_topo = pilha_desempilhar(p);
            
            int chave_topo = item_get_chave(item_topo);
            
            if ((c == ')' && chave_topo != '(') ||
                (c == '}' && chave_topo != '{') ||
                (c == ']' && chave_topo != '[')) {
                
                item_apagar(&item_topo);
                pilha_apagar(&p);
                return false;
            }
            item_apagar(&item_topo);
        }
    }

    bool resultado = pilha_vazia(p);
    pilha_apagar(&p);
    return resultado;
}