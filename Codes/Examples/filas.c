#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define tamanho 5

struct tfila {
    int dados[tamanho];
    int inicio;
    int fim;
};

struct tfila fila;
int op;


void filaEntrar() {
    if (fila.fim == tamanho){
        printf("Fila cheia\n");
        system("pause");
        sleep(2);
    } else {
        printf("Digite o valor a ser inserido na fila: ");
        scanf("%d", &fila.dados[fila.fim]);
        fila.fim++;
    };
};

void filaSair() {
    if (fila.inicio == fila.fim){
        printf("Fila vazia\n");
        system("pause");
        sleep(2);
    } else {
        for (int i = 0; i < tamanho; i++){
            fila.dados[i] = fila.dados[i+1];
        };
        fila.dados[fila.fim] = 0;
        fila.fim--;
    };
};

void filaImprimir() {
    if (fila.inicio == fila.fim){
        printf("Fila vazia\n");
        system("pause");
        sleep(2);
    } else {
        printf("Fila: [");
        for (int i = fila.inicio; i < fila.fim; i++){
            printf("%d, ", fila.dados[i]);
        };
        printf("%d]\n", fila.dados[fila.fim]);

        sleep(2);
    };
};

void mostrarMenu() {
    printf("Digite a opcao desejada: \n");
    printf("1 - Entrar na fila\n");
    printf("2 - Sair da fila\n");
    printf("3 - Imprimir fila\n");
    printf("0 - Sair\n");
};


int main() {
    setlocale(LC_ALL, "Portuguese");
    op = 1;
    fila.inicio = 0;
    fila.fim = 0;
    while (op != 0){
        system("clear");
        mostrarMenu();
        scanf("%d", &op);
        switch (op){
            case 1: 
                filaEntrar(); 
            break;
            case 2: 
                filaSair() ; 
            break;
            case 3: 
                filaImprimir(); 
            break;
            case 0: 
                printf("Saindo...\n"); 
            break;
            default: printf("Opcao invalida\n");
            sleep(2);
        };
    };
    return 0;
};

