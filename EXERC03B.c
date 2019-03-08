/* Cálcula a quantidade de litros de combustível gasta em uma viagem*/

#include <stdio.h>

int main(void)
{
    int KM_POR_LITRO;
    float LITROS_USADOS, DISTANCIA, TEMPO, VELOCIDADE_M;

    KM_POR_LITRO = 12;

    printf("Informe tempo gasto de viagem em horas: "); scanf("%f", &TEMPO);
    printf("Informe a velocidade média do automóvel durante a viagem em KM/h: "); scanf("%f", &VELOCIDADE_M);

    DISTANCIA = TEMPO * VELOCIDADE_M;
    LITROS_USADOS = DISTANCIA / KM_POR_LITRO;

    printf("Velocidade Média: %4.0f KM/h\n", VELOCIDADE_M);
    printf("Tempo gasto: %7.1f Horas\n", TEMPO);
    printf("Distância percorrida: %7.1f KM\n", DISTANCIA);
    printf("Quantidade de litros utilizados: %7.2f Litros\n", LITROS_USADOS);


    
    return (0);
}
