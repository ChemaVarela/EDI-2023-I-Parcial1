#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int m()
{
    int n, i, j, cont=0;
    bool azul=true, blanco=false;
    printf("Dame el tamaño del cuadrado: ");
    scanf("%d", &n);
    int carac[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            carac[i][j]=0;
        }
    }
    while(cont<=n)
    {
        if(azul)
        {
            for(i=cont; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(j%3==0)
                    {
                        carac[i][j]=1;
                    }

                    else
                    {
                        carac[i][j]=0;
                    }
                }
            }
        }
        else if(blanco)
        {
            for(i=cont; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(j%3!=0)
                    {
                        carac[i][j]=1;
                    }
                    else
                    {
                        carac[i][j]=0;
                    }

                }
            }
        }
        cont++;
        if(cont%2==0)
        {
            azul=!azul;
            blanco=!blanco;
        }

    };
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", carac[i][j]);
        }
        printf("\n");
    }
}
