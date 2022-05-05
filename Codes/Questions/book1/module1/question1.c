/*
a: Defina um ponteiro do tipo inteiro.
b: Faça alocação dinâmica para o ponteiro recém-criado.
c: Preencha a memoria com o valor 42.
d: Imprima o endereço do ponteiro na memoria e o valor contido nele.
*/


#include  <stdio.h>
#include  <stdlib.h>

int main (){
    int *p; // Definindo ponteiro do tipo inteiro
    p = (int*) malloc(sizeof(int)); // Alocando memoria para o ponteiro
    if (p == NULL) { // Verificando se a alocacao foi realizada
        printf("Erro na alocacao de memoria");
        exit(1);
    }else {
        *p = 42; // Preenchendo a memoria com o valor 42
    }
    printf("Valor de p: %d\n", *p); // Imprimindo o valor do ponteiro
    printf("Endereco de p: %p\n", p); // Imprimindo o endereco do ponteiro
}