/* Converter Celsius para Fahrenheit*/

#include <stdio.h>

int main(void)
{
    float F, C;

    printf("Informe a temperatura em Celsius para converter em Fahrenheit: "); scanf("%f", &C);
    F = ((9 * C + 160) / 5);

    printf("Celsius......: %6.2f\nFahrenheit...: %6.2f\n", C, F);

    return (0);
}
