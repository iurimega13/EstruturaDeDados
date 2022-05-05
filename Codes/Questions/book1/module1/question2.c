/*
Uma famosa fábrica de semáforos está testando um novo protótipo, menor,
mais barato e eficiente. Foi solicitado à equipe de TI um programa em lingua-
gem C para fazer o teste do novo hardware. O semáforo tem três objetos, cada
um contém um atributo cor e outro id. Devido às limitações de memória e pro-
cessamento, é necessária a criação de um ponteiro que vai percorrendo a me-
mória e imprimindo o valor na tela.
a) Crie uma estrutura que tenha dois atributos: cor (cadeia de caracteres) e id
(inteiro).
b) Crie três variáveis com o tipo definido no item a.
c) Crie um ponteiro do mesmo tipo.
d) Inicialize as estruturas da seguinte forma:
• cor vermelha, id 1.
• cor amarela, id 2.
• cor verde, id 3.
e) Inicialize o ponteiro apontando para a primeira variável criada.
f ) Por meio de operações aritméticas com ponteiros, percorra a memória e im-
prima o valor de cada uma das variáveis criadas nesse programa.
*/
#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura
struct semaforo{
    char cor[10];
    int id;
};

// Declaração das variáveis
struct semaforo semaforo1 = {"vermelho",  1};
struct semaforo semaforo2 = {"amarelo",  2};
struct semaforo semaforo3 = {"verde",    3};

// Declaração do ponteiro
struct semaforo *ponteiro;

int main(){
    // Inicialização do ponteiro
    ponteiro = &semaforo1;

    // Impressão do valor da variável
    printf("%d - %s\n", (*ponteiro).id,(*ponteiro).cor);
    ponteiro++;
    printf("%d - %s\n", (*ponteiro).id,(*ponteiro).cor);
    ponteiro++;
    printf("%d - %s\n", (*ponteiro).id,(*ponteiro).cor);
}