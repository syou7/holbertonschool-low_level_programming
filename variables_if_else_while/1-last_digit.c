#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - determiner if the last digit is a variable 
 *return 0 on success
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
       
	if((n % 10) >5)
	{
		prinf("last digit of %d is %d and is greaterthan 5\n",
		      n, n% 10);
			}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n",
n, n % 10);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n"
		       n, n % 10);
	}


	return (0);
}
