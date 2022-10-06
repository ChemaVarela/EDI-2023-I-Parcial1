#include<stdio.h>
#define MAX 50
void Conversor(char cadena[MAX]);

int main(){
    char cadena[MAX];
    printf("Dame una cadena de caracteres\n");
    scanf("%[^\n]",cadena);
    Conversor(cadena);
    printf("%s", cadena);
}

void Conversor(char cadena[MAX]){
    for(int i=0; cadena[i]!=0; i++){
        switch (cadena[i]){
            case 'a':
                cadena[i] = 'A';
                break;
            case 'e':
                cadena[i] = 'E';
                break;
            case 'i':
                cadena[i] = 'I';
                break;
            case 'o':
                cadena[i] = 'O';
                break;
            case 'u':
                cadena[i] = 'U';
                break;
            case 'A':
                cadena[i] = 'a';
                break;
            case 'E':
                cadena[i] = 'e';
                break;
            case 'I':
                cadena[i] = 'i';
                break;
            case 'O':
                cadena[i] = 'o';
                break;
            case 'U':
                cadena[i] = 'u';
                break;

        }
    }
}
