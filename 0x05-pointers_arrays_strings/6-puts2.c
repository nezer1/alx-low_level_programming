#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str: string to print
 */
void puts2(char *str)
{
int length;
int i = 0;
length = string_len(str);
while (i < length)
{
if ( i % 2 == 0)
{
_putchar(i);
}
}
}
