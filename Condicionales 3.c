#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    printf("Dame el valor del lado A: ");
    scanf("%f", &a);

    printf("Dame el valor del lado B: ");
    scanf("%f", &b);

    printf("Dame el valor del lado C: ");
    scanf("%f", &c);

    if(a == b && a == c || b == a && b == c || c == a && c == b)
        printf("El triangulo es equilatero");
    else if(a == b && a != c || a == c && a != b || b == a && b != c || b == c && b != a || c == a && c != b || c == b && c != a)
        printf("El triangulo es isosceles");
    else if(a != b && a != c || b != a && b != c || c != a && c != b)
        printf("El triangulo es escaleno");

    return 0;
}
