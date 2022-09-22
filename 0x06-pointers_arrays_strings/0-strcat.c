#include "main.h"

/**
 * _strcat - concatenate string
 * @dest: dest pointer
 * @src: src pointer
 */
char *_strcat(char *dest, char *src)
{
int length = 0;
int i;
length = string_len(dest);
for (i = 0; src[i] != '\0'; i++)
{
dest[length] = src[i];
length++;
}
dest[i] = '\0';
return (dest);
}

/**
 * string_len - length of a string
 * @s: string
 * Return: length 
 */
void string_len(char *s)
{
int length = 0;
while (s[length] > '\0')
{
length++;
}
return (length);
}
