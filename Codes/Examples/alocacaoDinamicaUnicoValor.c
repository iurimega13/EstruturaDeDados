#include <stdio.h>
#include <stdlib.h>

int main () {
    int *p;
    p = (int*) malloc(sizeof(int));
    if (p == NULL) {
        printf("Erro na alocacao de memoria");
        exit(1);
    }else {
        *p = 10;
        printf("Valor de p: %d\n", *p);
        printf("Endereco de p: %p\n", p);
        free(p);
    }
}

