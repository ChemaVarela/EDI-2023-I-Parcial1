#include <stdio.h>
#include <stdlib.h>

void imprimir(int arr3[],int tamsum);
void cambio(int *a, int *b);
void llenar(int arr1[],int tamm);
void llenar(int arr2[],int tamn);
void burbuja(int arr3[],int tamsum);
int main()
{
    int tamn, tamm;
    printf("Tamaño del arreglo M: ");
    scanf("%d",&tamm);
    printf("Tamaño del arreglo N: ");
    scanf("%d",&tamn);
    int arr1[tamm],arr2[tamn];
    int tamsum=tamn+tamm;
    int arr3[tamsum];
    llenar1(arr1,tamm);
    llenar2(arr2,tamn);
    llenar3(arr3,tamsum,arr1,tamm,arr2,tamn);
    burbuja(arr3,tamsum);
    imprimir(arr3,tamsum);

}



void llenar1(int arr1[],int tamm)
{
    printf("Arreglo M: \n");
    for(int i=0;i<tamm;i++)
        scanf("%d",&arr1[i]);
}

void llenar2(int arr2[],int tamn)
{
    printf("Arreglo N: \n");
    for(int i=0;i<tamn;i++)
        scanf("%d",&arr2[i]);
}

void llenar3(int arr3[], int tamsum, int arr1[],int tamm,int arr2[],int tamn)
{
    for(int i=0;i<tamm;i++)
        arr3[i]=arr1[i];
    for(int i=tamm;i<tamsum;i++)
        arr3[i]=arr2[i-tamm];
}


void imprimir(int arr3[],int tamsum)
{
    for(int i=0;i<tamsum;i++)
        printf("%d ",arr3[i]);
}

void burbuja(int arr3[],int tamsum)
{
    for(int i=0;i<tamsum-1;i++)
    {
        for(int j=0;j<tamsum-1-i;j++)
            if(arr3[j]>arr3[j+1])
                cambio(&arr3[j],&arr3[j+1]);
    }
}

void cambio(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
