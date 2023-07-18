#include <stdio.h>

/**
* main - Print _putchar then a new line.
* Return: 0
*/

int main(void)
{
char test_name[] = "_putchar";
int i;

for (i = 0; i <= 7; i++)
{
putchar(test_name[i]);
}

putchar('\n');

return (0);
}
