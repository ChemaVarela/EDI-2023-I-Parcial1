#include <stdio.h>

int main()
{
    float precioxkilo, peso, total;

    printf("Dame el precio por kilo: ");
    scanf("%f" , &precioxkilo);

    printf("Dame el peso de las manzanas: ");
    scanf("%f" , &peso);

    if(peso <= 2)
        total = (precioxkilo*peso);
    else if(peso >= 2.01 && peso <= 5)
        total = (precioxkilo*peso)*.90;
    else if(peso >= 5.01 && peso <= 10)
        total = (precioxkilo*peso)*.85;
    else if(peso >= 10.01)
        total = (precioxkilo*peso)*.80;


    printf("El total es de: %.2f" , total);

    return 0;

}
