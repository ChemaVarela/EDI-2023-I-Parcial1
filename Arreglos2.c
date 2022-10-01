#include<stdio.h>
#define N 10

int man()
{
    int i,j;
    int patron[N][N];

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            patron[i][j]=0;
        }
    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(i==j || (i+j)==N-1 ){
                patron[i][j]=1;
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
