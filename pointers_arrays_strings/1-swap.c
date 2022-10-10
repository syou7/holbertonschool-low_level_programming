#include "main.h"
/**
 *swap_int - function that swaps the values of two integers
 *@a: parameter of the function
 *@b: parameter of the function
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
