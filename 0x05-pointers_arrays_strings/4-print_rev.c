#include "main.h"

/**
 * print_rev - reverse a string
 * @s: string ti be reversed
 */
void print_rev(char *s)
{
int j = 0;
int i =0;
char length = 0;
int temporal = 0;
while (s[length] > '\0')
{
length++;
}
for (i = length -1; i>=0; i--)
{
_putchar(s[i]);
}
}
