#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - The last digit
 *
 *Return: Always 0 (Success)
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
