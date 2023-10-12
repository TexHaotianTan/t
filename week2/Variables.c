#include <stdio.h>
#include <time.h>
int main (){

    int a = 3;
    int b = 5;
    printf("before: a=%d, b=%d\n", a, b);
    int t = 0;
    t = a;
    a = b;
    b = t;
    printf("after: a=%d, b=%d\n", a, b);

    return 0;

}