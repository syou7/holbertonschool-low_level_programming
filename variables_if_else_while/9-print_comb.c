#include<stdio.h>
/**
*main - prints all possible combinations of single-digit numbers
*Numbers must be separated by ,, followed by a space
*Numbers should be printed in ascending order
*Return: always (0)
*/

int main(void)
{
	int combin;

	for (combin = '0'; combin <= '9'; combin++)
	{
		putchar (combin);
		if (combin != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
