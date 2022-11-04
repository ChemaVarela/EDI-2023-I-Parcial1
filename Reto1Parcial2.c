#include <stdio.h>
#include <stdlib.h>

#define tam 10
void llenar(int arr[tam]);
int busquedabin(int n,int arr[tam]);
int main()
{
    int arr[tam],n,izq=0,der=tam,pos;
    llenar(arr);
    printf("Dame el numero a buscar: ");
    scanf("%d",&n);
    pos=busquedabin(n,arr);
    printf(" %d",pos);

}


void llenar(int arr[tam])
{
    for(int i=0;i<tam;i++)
        scanf("%d",&arr[i]);
}


int busquedabin(int n,int arr[tam])
{
    int izq=0;
    int der=tam;
    int posImaginaria;

    while(izq<=der)
    {
        int mitad = (izq+der)/2;
        if(arr[mitad]==n)
        {
            printf("El indice es: ");
            return mitad;
        }


        else if (arr[mitad]>n)
        {
            posImaginaria=mitad;
            der=mitad-1;
        }
        else
            izq=mitad+1;
    }
    printf("El numero no esta, pero el indice deberia ser:");
    return posImaginaria;
}


