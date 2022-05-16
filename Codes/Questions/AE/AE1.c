#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    p = (int *)malloc(sizeof(int));

    *p = 54;

    printf("O valor de p é %d\n", *p);
    printf("O endereço de p é %p\n", p);

    free(p);

    return 0;
}