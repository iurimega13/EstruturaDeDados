#include <stdio.h>
#include <stdlib.h>

#define tamanho 3

struct tipo_pilha{
    int dados[tamanho];
    int ini;
    int topo;
}

struct tipo_pilha pilha;

/* Metodo Push*/

void empilha (int elemento) {
    if (pilha.topo == tamanho) {
        printf("Pilha cheia\n");
        system("pause");
    } else {
        pilha.dados[pilha.topo] = elemento;
        pilha.topo++;
    }
}

/* Metodo Pop*/

int desempilha () {
    int elemento;
    if (pilha.topo == pilha.ini){
        printf("Pilha vazia\n");
        system("pause");
    } else {
        elemento = pilha.dados[pilha.topo];
        pilha.topo--;
        return elemento;
    } else {
        pilha.topo--;
        elemento = pilha.dados[pilha.topo];
        return elemento;
    }
} 