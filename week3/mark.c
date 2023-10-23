#include <stdio.h>

int main(){

    int mark;
    
    printf("Your mark is: \n");
    scanf("%d", &mark);

    if ( mark< 0 || mark > 100)
    {
        printf ("The mark of %d is error\n", mark);
    }
    else
    {
        printf ("The mark of %d is right\n", mark);
    }

    return 0;

}