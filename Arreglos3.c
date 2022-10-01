#include<stdio.h>
#define N 10

int mai()
{
    int i,j,dis;
    int patron[N][N];

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            patron[i][j]=0;
        }
    }


    for(dis=0;dis<N/2;dis+=2){
        for(i=dis;i<N-dis;i++){
        patron[dis][i]=1;
        patron[N-dis-1][i]=1;
        patron[i][dis]=1;
        patron[i][N-dis-1]=1;
        }
    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("[%d]",patron[i][j]);
        }
        printf("\n");
    }
}
