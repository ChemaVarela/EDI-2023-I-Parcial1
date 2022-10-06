#include <stdio.h>
#define fila 3
#define columna 4
void leer(int arreglo[][columna]);
void suma_vecinos(int arreglo[][columna], int arreglo2[][columna]);
void imprimir_arr(int arreglo2[][columna]);

int main(){

    int arreglo[fila][columna];
    int arreglo2[fila][columna];
    leer(arreglo);
    suma_vecinos(arreglo,arreglo2);
    imprimir_arr(arreglo2);

}

void leer(int arreglo[][columna] ){
    for (int i=0; i<fila; i++){
        for (int j=0; j<columna; j++){
            printf("Dame los valores %d %d \n ",i, j);
            scanf("%d", &arreglo[i][j]);
        }
    }
}

void suma_vecinos(int arreglo[][columna],int arreglo2[][columna]){
    for (int i=0; i<fila; i++){
        for (int j=0; j<columna; j++){
            arreglo2[i][j]=arreglo[i][j];
            if(i-1>=0){
                arreglo2[i][j]+=arreglo[i-1][j];
            }
            if(i+1<fila){
                arreglo2[i][j]+=arreglo[i+1][j];
            }
            if(j-1>=0){
                arreglo2[i][j]+=arreglo[i][j-1];
            }
            if(j+1<columna){
                arreglo2[i][j]+=arreglo[i][j+1];
            }
        }
    }
}

void imprimir_arr(int arreglo2[][columna] ){
    for (int i=0; i<fila; i++){
        for (int j=0; j<columna; j++){
            printf ("%d ",arreglo2[i][j]);
        }
        printf("\n");
    }
}
