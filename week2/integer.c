#include <stdio.h>
int main (){

    float integer1, integer2, sum;

    printf("The integer1 is ");
    scanf("%f" , &integer1);
    printf("The integer2 is ");
    scanf("%f" , &integer2);

    sum = integer1 + integer2;

    printf("The sum is: %f\n", sum);

    return 0;

}