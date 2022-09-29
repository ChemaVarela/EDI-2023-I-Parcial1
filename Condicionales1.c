#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas, minutos;

    printf("Dame las horas: ");
    scanf("%d" ,&horas);
    printf("Dame los minutos: ");
    scanf("%d" , &minutos);

    if (horas<=11 && minutos <=59)
        printf("Buenos dias");
    else if(horas >= 12 && horas <= 17 && minutos <=50)
        printf("Buenos tardes");
    else if(horas >= 18 && horas <= 23 && minutos <=59)
         printf("Buenos noches");
    else if(horas >= 24)
        printf("hora no valida");
    return 0;
}
