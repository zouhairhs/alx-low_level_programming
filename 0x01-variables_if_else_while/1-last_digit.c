#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
srand(time(NULL));  // seed the random number generator with the current time
int n = rand() % 1000 + 1;  // generate a random number between 1 and 1000
int last_digit = n % 10;  // get the last digit of the random number
printf("Random number: %d\n", n);
printf("Last digit: %d\n", last_digit);
return (0);
}
