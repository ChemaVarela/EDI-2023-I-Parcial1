#include <stdio.h>

void  MayorAQueB(int a, int b);
void MenorAQueB(int a, int b, int c);
void C_menorCero(int c);
int main()
{
    int a; int b; int c;

    printf("Dame el valor a: ");
    scanf("%d", &a);

    printf("Dame el valor b: ");
    scanf("%d", &b);

    printf("Dame el valor c: ");
    scanf("%d", &c);


    printf("valores:\n %d\n %d\n %d\n \n", a, b, c);

    MayorAQueB( a, b);
    printf("\n");
    MenorAQueB(a, b, c);
    C_menorCero( c);
    return 0;
}

void  MayorAQueB (int a, int b) {
    if (a > b) {
        b = b+b;
        printf("a es mayor que b, por lo tanto b = %d", b);}
    else{
        printf("a NO es mayor que b \n");
    }
}
void MenorAQueB (int a, int b, int c){
    if (a < b) {
        c = c-a;
        printf("a es menor b por lo tanto, c = %d\n", c);}
    else{
        printf("a NO es menor que b \n");
    }
}
void C_menorCero(int c) {
    if (c < 0) {
        c = (-1)*c;
        printf("c es menor que 0 por lo tanto, c = %d\n", c);
    }
    else{
        printf("c NO es menor que cero");
    }
}
