#include <stdio.h>

/**
* main - Prints base 16 in lower case.
* Return: 0
*/

int main(void)
{
char justBase;
char justBase2;

for (justBase = '0' ; justBase <= '9' ; justBase++)
{
putchar(justBase);
}
for (justBase2 = 'a' ; justBase2 <= 'f' ; justBase2++)
{
putchar(justBase2);
}
putchar(10);
return (0);
}
