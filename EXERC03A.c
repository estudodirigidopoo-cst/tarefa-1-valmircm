#include <stdio.h>

int main(void)
{
    int A, B, C, D, RESULTADO;

    printf("Insira um valor inteiro para a variável \"A\":"); scanf("%d", &A);
    printf("Insira um valor inteiro para a variável \"B\":"); scanf("%d", &B);
    printf("Insira um valor inteiro para a variável \"C\":"); scanf("%d", &C);
    printf("Insira um valor inteiro para a variável \"D\":"); scanf("%d", &D);

    RESULTADO = A + B; printf("A + B = %d\n", RESULTADO);
    RESULTADO = A + C; printf("A + C = %d\n", RESULTADO);
    RESULTADO = A + D; printf("A + D = %d\n", RESULTADO);
    RESULTADO = B + C; printf("B + C = %d\n", RESULTADO);
    RESULTADO = B + D; printf("B + D = %d\n", RESULTADO);
    RESULTADO = C + D; printf("C + D = %d\n\n", RESULTADO);

    RESULTADO = A * B; printf("A * B = %d\n", RESULTADO);
    RESULTADO = A * C; printf("A * C = %d\n", RESULTADO);
    RESULTADO = A * D; printf("A * D = %d\n", RESULTADO);
    RESULTADO = B * C; printf("B * C = %d\n", RESULTADO);
    RESULTADO = B * D; printf("B * D = %d\n", RESULTADO);
    RESULTADO = C * D; printf("C * D = %d\n", RESULTADO);    

    return(0);
}