#include <stdio.h>

int verificare_int(int verifey)
{
    while(scanf("%d", &verifey) != 1 )
    {   
        printf("\nNu ai introdus un numar!");    
    }
    return verifey;
}

int verificare_char(char simbol)
{
    while(scanf("%c", &simbol) != 1 )
    {   
        printf("\nNu ai introdus un simbol!");
        fflush(stdin);   
    }
    return simbol;
}