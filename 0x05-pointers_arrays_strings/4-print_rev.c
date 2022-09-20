#include "main.h"

/**
 * print_rev - reverse a string
 * @s: string ti be reversed
 */
void print_rev(char *s)
{
  int j = 0;
int i = 0;
int length = 0;
int temporal = 0;
while(s[length] > '\0')
{
temporal = s[length++];
}
while(i < length/2)
{
temporal = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temporal;
}
while(j < length)
{
_putchar(s[j++]);
}
}
