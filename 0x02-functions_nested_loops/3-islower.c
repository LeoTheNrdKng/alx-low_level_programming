#include "main.h"

/**
* _islower - Check for lowercase character.
* Return: 1 if c is lowercase, return 0 otherwise.
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
