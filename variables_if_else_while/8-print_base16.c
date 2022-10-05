#include <stdio.h>

/**
*main - Print prints all the numbers of base 16
*
*Return: Always 0 (Success)
*/
int main(void)
{
char num;
char alpha;
for (num = '0'; num <= '9'; num++)
putchar(num);
for (alpha = 'a'; alpha <= 'f'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
