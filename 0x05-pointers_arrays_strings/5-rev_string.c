#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer
 */
void rev_string(char *s)
{
int length = 0;
int i = 0;
length = string_len(s);
char st[length];

for (i = length - 1; i >= 0; i--)
{
length;
st[i - (length - 1)] = s[i];
}
while(i < length)
{
s[i] = st[i];
i++;
}
}

/**
 * string_len - length of string
 * @s: pointer
 * Return: length 
 */
void stirng_len(char *s)
{
int length = 0;
int i = 0;
int len = 0;
while (s[length] > '\0')
{
length++;
}
return (length);
}
