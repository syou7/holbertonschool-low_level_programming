#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase after.
 *
 * Return: Always 0.
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter = 'A' <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
