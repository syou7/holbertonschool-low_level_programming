#include "main.h"
/**
 *swap_int *a, *b - function that swap the value of two integer
 *@a: first integer to be swapped
 *@b: second integer to be swapped
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = *a;
	*b = temp;
}
