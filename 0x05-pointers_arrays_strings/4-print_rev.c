#include "main.h"

/**
 * print_rev - reverse a string
 * @s: string ti be reversed
 */
void print_rev(char *s)
{
int i = 0;
int length = _strlen(s);
int temporal = 0;
while(i < length/2)
{
temporal = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temporal;
}
}