#include <stdio.h>

/**
* main - Prints single digit numbers of base 10 starting from 0
* Return: 0
*/

int main(void)
{
int numBase;

for (numBase = 0 ; numBase  <= 9 ; numBase++)
{
putchar(numBase + '0');
}
putchar(10);
return (0);
}
