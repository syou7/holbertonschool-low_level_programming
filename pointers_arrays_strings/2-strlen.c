#include "main.h"

/**
 * _strlen - function that return lenght of a string
*@s: parameter of the function
*
*Return: integer
*/

int _strlen(char *s)

{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;

	}
	return (i);
}
