#include <stdio.h>
#include "item.h"
#include "Pilha.h"

//Mudar a lógica para usar os itens ao inves dos chars

bool balanceada(char *sequencia){
    PILHA* p = pilha_criar();
    
    int i = 0;
    bool status = true;

    while(sequencia[i] != '\0'){
        ITEM* chaveAtual;
        if(sequencia[i] == '{' || sequencia[i] == '(' || sequencia[i] == '['){
            switch (sequencia[i]){
                case '(':
                    chaveAtual = item_criar(0);
                    break;
                case '{':
                    chaveAtual = item_criar(1);
                    break;
                case '[':
                    chaveAtual = item_criar(2);
                    break;
                
                }
            if(!pilha_empilhar(p,chaveAtual)){
                printf("Erro ao inserir indice %d\n", i);
                status = false;
                break;
            }
            i++;
            continue;
        }

        if(sequencia[i] == '}' || sequencia[i] == ')' || sequencia[i] == ']'){
            if(pilha_vazia(p)) return false;
            int chaveAux = item_get_chave(pilha_topo(p));
            
            switch (sequencia[i]){
                case ')':
                    if(chaveAux != 0) return false;
                    break;
                case '}':
                    if(chaveAux != 1) return false;
                    break;
                case ']':
                    if(chaveAux != 2) return false;
                    break;
                }
            if(!pilha_desempilhar(p)){
                printf("Erro ao remover o indice %d\n", i);
                status = false;
                break;
            }
            i++;
            continue;
        }
    }
    if(i!= 0 && pilha_vazia(p)) status = true;
    //Trativa para evitar chaves que não foram fechadas no fim da string
    else status = false;

    return status;
}