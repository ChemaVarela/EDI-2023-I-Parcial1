#include<stdio.h>
#define N 10

int main()
{
    int i,j;
    int patron[N][N];

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            patron[i][j]=0;
        }
    }

    for(i=0;i<N;i++){
        patron[0][i]=1;
        patron[N-1][i]=1;
        patron[i][0]=1;
        patron[i][N-1]=1;
    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("[%d]",patron[i][j]);
        }
        printf("\n");
    }
}
