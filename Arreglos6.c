#include<stdio.h>
#define N 10

int mn ()
{
    int i,j,cont=1,band=0;
    int patron[N][N];

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            patron[i][j]=0;
        }
    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(cont%2==1){
                patron[i][j]=1;
            }
            band++;
            if(band==cont){
                cont++;
                band=0;
            }

        }

    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("[%d]",patron[i][j]);
        }
        printf("\n");
    }
}
