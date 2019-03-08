/* Converter Fahrenheit para Celsius*/

#include <stdio.h>

int main(void)
{
    float F, C;

    printf("Informe a temperatura em Fahrenheit para converter em Celsius: "); scanf("%f", &F);
    C = ((F - 32) * 5 / 9);
    printf("Fahrenheit...: %6.2f\nCelsius......: %6.2f\n", F, C);

    return (0);
}