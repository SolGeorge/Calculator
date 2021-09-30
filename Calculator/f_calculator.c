#include <stdio.h>

int verificare_int(int var)
{
    while(scanf("%d", &var) != 1 )
    {   
        printf("\nError! You didn't introduce a number!\n");
        fflush(stdin);    
    }
    return var;
}

int verificare_char(char simbol)
{
    while(scanf("%c", &simbol) != 1 )
    {   
        printf("\nError! You didn't introduce an operator!\n");
        fflush(stdin);   
    }

    return simbol;
}

void f_calculator()
{
    char   operation;
    int nr;
    int total = 0;

    total=verificare_int(total);
    //printf("%d", total);

    operation=verificare_char(operation);
    //printf("%c", operation);

    switch (operation) 
    {
        case '+':

        nr=verificare_int(nr);
        //printf("%d", nr);

        total += nr;
        printf("=%d\n",total);

        break;
        case '-':

        nr=verificare_int(nr);
        //printf("%d", nr);

        total -= nr;
        printf("=%d\n",total);

        break;
        case '*':
        nr=verificare_int(nr);
        //printf("%d", nr);

        total *= nr;
        printf("=%d\n",total);

        break;
        case '/':

        nr=verificare_int(nr);
        //printf("%d", nr);

        total /= nr;
        printf("=%d\n",total);

        break;
        default:

        printf("\nError! The operation is not correct\n");
    }

    if((scanf("%c", &operation)) == 1 )
    {
        //fflush(stdin); 
        f_calculator();
    }
    else
    {
        printf("\n***THE END***\n");
    }

}