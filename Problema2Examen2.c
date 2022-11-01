#include <stdio.h>
#include <stdlib.h>


void imprimir(int arr[],int tam);
void cambio(int *a, int *b);
void llenar(int arr[],int tam);
void burbuja(int arr[],int tam);
int main()
{
    int tam;
    printf("Tamaño del arreglo (Un valor entre 1 y 100): ");
    scanf("%d",&tam);
    int arr[tam];
    llenar(arr,tam);
    burbuja(arr,tam);
    imprimir(arr,tam);

}



void llenar(int arr[],int tam)
{
    for(int i=0;i<tam;i++)
        scanf("%d",&arr[i]);
}

void burbuja(int arr[],int tam)
{
    for(int i=0;i<tam-1;i++)
    {
        for(int j=0;j<tam-1-i;j++)
            if(arr[j]<arr[j+1])
                cambio(&arr[j],&arr[j+1]);
    }
}

void cambio(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

void imprimir(int arr[],int tam)
{
    for(int i=0;i<tam;i++)
        printf("%d ",arr[i]);
}
