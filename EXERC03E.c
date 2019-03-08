/*Volume de uma lata de óleo*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float V, R, A;

    printf("Informe o raio da lata...:  "), scanf("%f", &R);
    printf("Informe a altura da lata.:  "), scanf("%f", &A);


    V = 3.14159 * R * R * A;
    printf("O volume da lata de óleo é.......: %10.2f\n ", V);

    return (0);
}