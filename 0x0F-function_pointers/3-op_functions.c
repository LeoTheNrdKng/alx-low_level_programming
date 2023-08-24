#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The result.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculates the difference between two numbers.
 * @a: first number
 * @b: second number
 *
 * Return: The result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calculates the product of two numbers.
 * @a: first number
 * @b: second number
 *
 * Return: The result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Calculates the quotient of two numbers.
 * @a: first number
 * @b: second number
 *
 * Return: The result.
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - Calculates the module between two numbers.
 * @a: first number
 * @b: second number
 *
 * Return: The result.
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
