#include "main.h"

/**
* _memset - Fill the first n byte of the memory area pointed by s with the
* constant byte b.
* @s: Pointer to the memory area s.
* @b: Constant byte.
* @n: Numbers of the bytes.
* Return: A pointer to the memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
for (; n; n--)
{
s[n - 1] = b;
}
return (s);
}
