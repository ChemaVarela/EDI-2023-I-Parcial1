#include <stdio.h>


int main()
{

    int dias, horas, minutos, segundos;

    printf("Dame el numero de dias: ");
    scanf("%d", &dias);

    printf("Dame el numero de horas: ");
    scanf("%d", &horas);

    printf("Dame el numero de minutos: ");
    scanf("%d", &minutos);

    segundos = (dias*86400) + (horas*3600) + (minutos*60);

    printf("El total de segundos es de: %d", segundos);

    return 0;
}
