#include <stdio.h>
#include "main.h"

/**
* main - Prints _putchar then adds a new line.
* Return: 0
*/

int main(void)
{
char display_word[] = "_putchar";
int i;

for (i = 0; i <= 7; i++)
{
putchar(display_word[i]);
}

putchar('\n');

return (0);
}
