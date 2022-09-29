#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Nprod, mayor, contmayor, menor, contmenor;
    printf("¿Cuantos productos hay en la tienda? \n");
    scanf("%d", &Nprod);
    int clave[Nprod], stock[Nprod];
    float precio[Nprod], acum=0;
    printf("Dime la clave de cada producto \n");
    for(int i=0; i<Nprod; i++)
    {
        scanf("%d", &clave[i]);
    }
    printf("Dime el precio de cada producto \n");
    for(int i=0; i<Nprod; i++)
    {
        scanf("%f", &precio[i]);
    }
    printf("Dime el stock de cada producto \n");
    for(int i=0; i<Nprod; i++)
    {
        scanf("%d", &stock[i]);
    }
    mayor=precio[0];
    for(int i=0; i<Nprod; i++)
    {
        if(precio[i]>mayor)
        {
            mayor=precio[i];
            contmayor=i;
        }

    }
    menor=stock[0];
    for(int i=0; i<Nprod; i++)
    {
        if(stock[i]<menor)
        {
            menor=stock[i];
            contmenor=i;
        }
    }
    for(int i=0; i<Nprod; i++)
    {
        acum=acum+(precio[i]*stock[i]);
    }

    printf("Clave de producto con mayor precio: %d\n", clave[contmayor]);
    printf("Clave de producto con menor stock: %d\n", clave[contmenor]);
    printf("Total de venta esperada: %0.2f\n", acum);
    return 0;
}
