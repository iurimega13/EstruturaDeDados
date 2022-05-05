#include <stdio.h>
#include <stdlib.h>

int main () {
    int *vetor;
    vetor = (int*) malloc(sizeof(int) * 10) ;

    if (vetor == NULL) {
        printf("Erro na alocacao de memoria");
        exit(1);
    }else { 
        for (int i = 0; i < 10; i++) {
            vetor[i] = i;
        }
        for (int i = 0; i < 10; i++) {
            printf("Valor de vetor[%d]: %d\n", i, vetor[i]);
            printf("Endereco de vetor[%d]: %p\n", i, &vetor[i]);
        }
        free(vetor);
    }
}