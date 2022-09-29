#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void llena_arreglo(char cad1[MAX]);
void carac(char c[1]);
int busqueda_carac(char cad2[MAX], char c[1]);

int mai()
{
    char cad1[MAX], cad2[MAX], c[1];
    int veces;
    llena_arreglo(cad1);
    strcpy(cad2, cad1);
    carac(c);
    veces=busqueda_carac(cad2, c);
    printf("\nEl caracter aparece %d veces en la cadena", veces);
    return 0;
}

void llena_arreglo(char cad1[MAX])
{
    printf("Dame la cadena a leer: \n");
    for(int i=0; i<MAX; i++)
    {
        scanf("%[^\n]", cad1);
    }
}

void carac(char c[1])
{
    printf("Dame el caracter a encontrar: \n");
    for(int i=0; i<1; i++)
    {
        scanf("%s", c);
    }
}

int busqueda_carac(char cad2[MAX], char c[1])
{
    int contc=0;
    for(int i=0; i<MAX; i++)
    {
        if(c[0] == cad2
           [i])
        {
            contc++;
        }

    }
    return contc;
}
