#include <stdio.h>

int main(){

    float radius, volume;

    printf("Write the radius of sphere\n");
    scanf("%f", &radius);
    printf("\n");

    volume = (4*3.14)/3*(radius*radius*radius);

    printf("The volume of sphere is %f\n", volume);

}