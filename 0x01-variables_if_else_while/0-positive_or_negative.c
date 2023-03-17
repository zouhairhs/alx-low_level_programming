#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    int n;
    srand(time(NULL));  // Seed the random number generator with the current time
    n = rand() % 201 - 100;  // Generate a random integer between -100 and 100
    printf("The number %d is ", n);
    if (n > 0)
{
        printf("positive.\n");
} else if (n < 0) 
{
        printf("negative.\n");
} else 
{
        printf("zero.\n");
}
    return (0);
}
