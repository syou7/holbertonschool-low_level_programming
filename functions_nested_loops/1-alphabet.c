#include "main.h"

/**
* print_alphabet - fonction that print alphabet
*
*Return: void
*/

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
