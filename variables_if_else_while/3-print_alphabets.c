#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase after.
 *
 * Return: Always 0.
 */
int main(void)
{
char letter;
char letter_uppercase;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter_uppercase = 'A' <= 'Z'; letter_uppercase++;)
putchar(letter_uppercase);
putchar('\n');
return (0);
}
