#include <stdio.h>

int main(){

    int number;
    
    printf("The number is:");
    scanf("%d", &number);

    if ( number == 0)
    {
        printf ("The number %d is zero\n", number);
    }
    else if (number > 0)
    {
        printf ("The number %d is positive\n", number);
    }
    else
    {
        printf ("The number %d is negative\n", number);
    }

    return 0;

}