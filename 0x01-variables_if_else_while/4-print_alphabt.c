#include <stdio.h>

/**
* main - Prints the alphabet in lower case.
* Return: 0
*/

int main(void)
{
char alpha;

for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
if (alpha != 'q' && alpha != 'e')
{
putchar(alpha);
}
}
putchar(10);
return (0);
}
