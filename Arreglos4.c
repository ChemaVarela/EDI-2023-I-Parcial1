#include <stdio.h>
#include <stdlib.h>
#define N 10

#define M 10

int mu()
{
    int matriz[N][M];
    int columna_actual = 0;
    int fila_actual = 0;
    int lim_columnas = M-1;
    int lim_filas = N-1;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            matriz[i][j]=0;
        }
    }
    while(columna_actual < lim_columnas && fila_actual < lim_filas){
        for (int i = columna_actual; i <= lim_columnas; i++) {
            matriz[fila_actual][i] = 1;
            if(i < lim_columnas-1){
                matriz[fila_actual+1][i+1] = 0;
            }
        }
        matriz[fila_actual+1][lim_columnas] = 1;
        fila_actual+=2;

        for (int i = fila_actual; i <= lim_filas; i++) {
            matriz[i][lim_columnas] = 1;
            if(i < lim_filas-1){
                matriz[i+1][lim_columnas-1] = 0;
            }
        }
        matriz[lim_filas][lim_columnas-1] = 1;
        lim_columnas-=2;

        if (columna_actual < lim_columnas) {
            for (int i = lim_columnas; i >= columna_actual; i--) {
                matriz[lim_filas][i] = 1;
                if(i > columna_actual+1){
                    matriz[lim_filas-1][i] = 0;
                }
            }
            matriz[lim_filas-1][columna_actual] = 1;
            lim_filas-=2;
        }

        if (fila_actual < lim_filas) {
            for (int i = lim_filas; i >= fila_actual; i--) {
                matriz[i][columna_actual] = 1;
                if(i < lim_filas+1){
                    matriz[i][columna_actual+1] = 0;
                }
            }
            matriz[fila_actual][columna_actual+1] = 1;
            columna_actual+=2;
        }
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
