#include <stdio.h>
int main (){

    float radius, area;

    printf("The radius of circle is ");
    scanf("%f" , &radius);

    area = 3.14 * radius * radius;

    printf("The area of circle is: %.3f\n", area);

    return 0;

}