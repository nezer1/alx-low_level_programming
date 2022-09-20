#include "main.h"

/**
 * print_rev - reverse a string
 * @s: string ti be reversed
 */
void print_rev(char *s)
{
int i = 0;
int length;
int temporal = 0;
int temporal1[];
while(s[length] > '\0')
{
temporal1 = s[length++];
}
while(i < length/2)
{
temporal = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temporal;
}
}
