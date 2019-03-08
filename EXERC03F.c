/*Inverte os valores de A e B*/

#include <stdio.h>

int main(void)
{
    int A, B, C;

    printf("Informe o valor da variável A: "), scanf("%d", &A);
    printf("Informe o valor da variável B: "), scanf("%d", &B);

    C = A; A = B; B = C;

    printf("\nNovos valores: \n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return (0);
}
