#include <stdio.h>
#include <stdlib.h>


struct spotify{
    int codigo;
    int numinter;
    int numplays;
    char nombrec[40];
    char album[40];
    char nominter[40];
};

void llenardatoscancion(struct spotify *cancion);
void arreglocanciones(struct spotify *cancion, int numcan);
int reproducciones(struct spotify *cancion, int numcan);
int main()
{
    int numcan,posplays;
    printf("Dame el numero de canciones a llenar: ");
    scanf("%d",&numcan);
    struct spotify cancion[numcan];
    arreglocanciones(cancion,numcan);
    posplays=reproducciones(cancion,numcan);
    printf("La cancion con el mayor numero de reproducciones fue: ")
    printf("%s",cancion[posplays].nombrec);
}


void llenardatoscancion(struct spotify *cancion)
{
    printf("Dame el codigo de la cancion: ");
    scanf("%d",&cancion->codigo);
    printf("Dame el nombre de la cancion: ");
    scanf("\n%[^\n]",cancion->nombrec);
    printf("Dame el numero de interpretes de la cancion: ");
    scanf("%d",&cancion->numinter);
    printf("Dame el nombre del album de la cancion: ");
    scanf("\n%[^\n]",cancion->album);
    printf("Dame el nombre del interprete de la cancion: ");
    scanf("\n%[^\n]",cancion->nominter);
    printf("Dame el numero de reproducciones de la cancion: ");
    scanf("%d",&cancion->numplays);
}

void arreglocanciones(struct spotify *cancion, int numcan)
{
    for(int i=0;i<numcan;i++)
    {
        llenardatoscancion(&cancion[i]);
    }
}

int reproducciones(struct spotify *cancion, int numcan)
{
    int mayor=cancion[0].numplays, pos;
    for(int i=0;i<numcan;i++)
    {
        if(cancion[i].numplays>mayor)
        {
            mayor=cancion[i].numplays;
            pos=i;
        }

    }
    return pos;
}
