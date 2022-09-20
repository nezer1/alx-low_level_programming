#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer
 */
void rev_string(char *s)
{
int length = 0;
int i = 0;
int len = 0;
while (s[length] > '\0')
{
length++;
}
for (i = length - 1; length >= 0; length--)
{
len = length;
s[i - (len - 1)] = s[i];
}
}
