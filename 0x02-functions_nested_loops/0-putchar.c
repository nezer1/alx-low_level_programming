#include <stdio.h>
#include "main.h"
/**
 * _putchar - prints a string literal
 * @charac: string to be printed
 */
void _putchar(char charac[])
{
int i = 0;
while (charac[i] > 0)
{
putchar(charac[i++]);
}
putchar('\n');
}
/**
 * main - implements printchar
 *
 * Return: 0 for success
 */
int main(void)
{
_putchar("_putchar");
return (0);
}
