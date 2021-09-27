#include <stdio.h>

int main() 
{
    char   operation;
    double nr;
    double total = 0;

    printf("***CALCULATOR***\n");
    
    start:

    scanf("%lf", &total);
    printf("%lf", total);

    second:

    scanf("%c", &operation);
    printf("%c", operation);

    switch (operation) 
    {
        case '+':

        scanf("%lf", &nr);
        printf("%lf", nr);

        total += nr;
        printf("=%lf",total);

        break;

        case '-':

        scanf("%lf", &nr);
        printf("%lf", nr);

        total -= nr;
        printf("=%lf",total);

        break;

        case '*':
        scanf("%lf", &nr);
        printf("%lf", nr);

        total *= nr;
        printf("=%lf",total);

        break;

        case '/':

        scanf("%lf", &nr);
        printf("%lf", nr);

        total /= nr;
        printf("=%lf",total);

        break;
        case 10:

        goto second;

        break;

        default:
        printf("\nError! Operation is not correct\n");
        goto start;
    }


    return 0;
}