#include "stdio.h"

int main()
{

    int dias, horas, minutos, segundos, rdias, rhoras;

    printf("Dame el numero de segundos: ");
    scanf("%d" , &segundos);

    dias = (segundos/86400);
    rdias = segundos%86400;

    horas = rdias/3600;
    rhoras = rdias%3600;

    minutos = rhoras/60;
    segundos = rhoras%60;


    printf("Dias: %d\n", dias);
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);


    return 0;
}
