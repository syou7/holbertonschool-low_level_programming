#include <stdio.h>

/**
*main - Print alphabet in reverse
*
*Return: Always 0 (Success)
*/

int main(void)
{
char alphab_revers;
for (alphab_revers = 'z'; alphab_revers >= 'a'; alphab_revers--)
putchar (alphab_revers);
putchar ('\n');
return (0);
}
