#include "main.h"

/**
* print_alphabet_x10 - truc
* Description: prints 10 times alphabet
* Return: void
*/

void print_alphabet_x10(void)
{
	int i = 0;
	int alpha;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
