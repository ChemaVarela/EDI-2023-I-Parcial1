#include <stdio.h>

int main()
{

    float precio, descuento, total;

    printf("Dame el precio del producto: ");
    scanf("%f", &precio);

    printf("El descuento es del: ");
    scanf("%f", &descuento);

    total = (100-descuento)*precio/100;

    printf("El total es:  %.2f", total);





    return 0;
}
