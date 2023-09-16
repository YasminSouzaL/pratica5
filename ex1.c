/*Crie um programa em C que apresente o menu de opções abaixo,
possibilitado ao usuário realizar as seguintes operações sobre uma
lista duplamente encadeada formada por letra.
 Inserir elemento no início da lista
 Remover determinado elemento da lista
 Exibir os elementos da lista
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct sNo{
    char dado;
    struct sNo *dir;
    struct sNo *esq;  
} NO;

//alocarNo()
a

void inserir_inicio(NO **lista, int elem){
    No *novo;
    novo = alocarNO();
    if(novo !=  NULL){
        novo -> dado = elem;
        novo -> esq = NULL;
        novo -> dir = *lista;
        if(!vazia(*lista)){
            (*lista) -> esq = novo;
        }
        *lista = novo;
    }
}

int main(){
    
}