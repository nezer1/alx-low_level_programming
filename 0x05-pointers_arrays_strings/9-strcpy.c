#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination pointer
 * @src: source pointer
 */
char *_strcpy(char *dest, char *src)
{
int length = 0;
int i = 0;
length = string_len(src);
while (i < length)
{
*dest = *src;
dest++;
src++;
i++; 
}
return (dest);
}

/**
 * string_len - length of string
 * @s: pointer
 * @Return: length
 */
int string_len(char *s)
{
int length = 0;
while (s[length] >'\0')
{
length++;
}
return (length);
}
