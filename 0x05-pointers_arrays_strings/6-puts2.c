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
_putchar('0' + i);
}
i++;
}
}

/**
 * string_len - length of string
 * @s- string
 */
int string_len(char *s)
{
int length;
while (s[length] > '\0')
{
length++;
}
return (length);
}
