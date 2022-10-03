#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (n == 0)
		printf("%d zero\n",n);

	else if (n < 0)
		prnitf("%d negative\n",n);
	else if (n > 0)
	       	printf("%d positive\n",n);
			
		return (0);
}
