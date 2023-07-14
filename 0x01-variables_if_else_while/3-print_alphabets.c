#include <stdio.h>

/**
* main - Prints the alphabet in lower case and upper case.
* Return: 0
*/

int main(void)
{
char alpha;
char beta;

for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
putchar(alpha);
}
for (beta = 'A' ; beta <= 'Z' ; beta++)
{
putchar(beta);
}
putchar(10);
return (0);
}
