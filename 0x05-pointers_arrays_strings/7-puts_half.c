#include "main.h"
0;10;1c
/**
 * put_half - print half of a string 
 * @str: string
 */
void puts_half(char *str)
{
int i = 0;
int j = 0;
int len = 0;
int length = 0;
length = string_len(str);
while (i < length) 
{
len = length;
if (length % 2 == 0)
{
while (j < length/2)
{
_putchar(str[(len/2)++]);
j++;
}
}
else
{
while (j < (length - 1) / 2)
{
_putchar(str[(len/2)++]);
}
}
i++;
}
_putchar('\n');
}

/**
 * string_len - string length
 * @s: pointer
 */
int string_len(char *s)
{
int length = 0;
while (s[length] > '\0')
{
length++;
}
return (length);
}
  
