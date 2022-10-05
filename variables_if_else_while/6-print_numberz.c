#include <stdio.h>

/**
*main - Prints all single digit numbers starting from 0 using only putchar 2T 
* Return: Always 0 (Success)
*/

int main(void)
{
int n;
n ='0';
while (n <='9')
{
putchar (n);
n++;
}
putchar ('\n');
return (0);
}
