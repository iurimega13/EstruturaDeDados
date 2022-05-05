/*
Crie um programa que leia uma variável e crie dois vetores dinâmicos, um com
o tamanho lido e outro com o dobro desse tamanho. Preencha esses vetores
respectivamente com potências de 2 e potências de 3.
a) Crie uma variável inteira e dois ponteiros do tipo inteiro.
b) Pergunte ao usuário o tamanho do vetor dinâmico e leia esse valor na variável
inteira.
c) Aloque dinamicamente os dois vetores usando a função malloc.
d) Faça um laço de repetição para preencher o primeiro vetor com potências
de 2.
e) Faça um segundo laço de repetição para preencher o outro vetor com po-
tências de 3.
f ) Não se esqueça de usar a biblioteca math.h para poder usar o cálculo de
potência (pow).
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int tamanho;
    int *vetor1, *vetor2;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor1 = (int *) malloc(tamanho * sizeof(int));
    vetor2 = (int *) malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++) {
        *(vetor1 + i) = pow(2, i);
    }
    for (int i = 0; i < tamanho; i++) {
        *(vetor2 + i) = pow(3, i);
    }

    printf("Vetor 1: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(vetor1 + i));
    }
    printf("\n"); 

    printf("Vetor 2: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(vetor2 + i));
    }
    printf("\n");

    free(vetor1);
    free(vetor2);
    
}