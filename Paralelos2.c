#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10

void llenar_arreglo(int numeros[MAX]);
int posiciones(int numero2[MAX]);
int valores(int numeros[MAX]);
int Suma_100(int numeros[MAX],int *cont);



int man(void) {
    int numero[MAX],st=0,sp=0,sv=0,cont=0, numero2[MAX];
    llenar_arreglo(numero);
    for(int i=0;i<MAX;i++){
        numero2[i]=numero[i];
    }
    for(int i=0;i<MAX;i++){
        printf("%d ", numero2[i]);
    }
    sp=posiciones(numero2);
    sv=valores(numero2);
    st=Suma_100(numero2, &cont);

    printf("\nLa suma de los valores en posiciones par es: %d",sp);
    printf("\nLa suma de los valores par es: %d",sv);
    printf("\nLa suma total menos de 100 es: %d", st);
    printf("\ny la cantidad de numeros es: %d", cont);
  return 0;
}

void llenar_arreglo(int numeros[MAX])
{
    srand(time(NULL));
    for (int i=0;i<MAX;i++){
        numeros[i]=1+rand()%99;
    }
}

int posiciones(int numero2[MAX])
{
    int i,sp=0;
    for (i=0;i<MAX;i++){
        if (i%2==0){
            sp=sp+numero2[i];
        }
    }
    return sp;
}


int valores(int numero2[MAX])
{
    int i,sv=0;
    for (i=0;i<MAX;i++){
        if(numero2[i]%2==0){
            sv=sv+numero2[i];
        }
    }
    return (sv);
}


int Suma_100(int numero2[MAX],int *cont)
{
    int i=0, st=0;
    while(st<=100){
        st=st+numero2[i];
        *cont=*cont+1;
        i++;
    };
    if(st>100)
    {
        st=st-numero2[(*cont)-1];
        *cont=*cont-1;
    }
    return st;
}
