#include <stdio.h>

int main() 
{
    char filename [] = "data.txt";
    FILE *file = fopen(filename, "w"); // or "a", "w+", "a+"
    if (file == NULL) {
        perror("");
        return 1;
    }

    //
    int numbers_line
    int square

    
