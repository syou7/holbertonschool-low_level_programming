#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - find the last digit  
*return: 0 on (success)
*/
int main(void)
{
int n;
int digit = 0;

srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (digit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, digit);
else if (digit == 0)
printf("Last digit of %d is %d and is 0\n", n, digit);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
return (0);
}
