#include <stdio.h>
/**
 * add - adds two numbers
 * @a: parameter 1
 * @b: parameter 2
 * Return: the sum of two numbers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two numbers
 * @a: parameter 1
 * @b: parameter 2
 * Return: the difference bewtween two numbers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two numbers
 * @a: parameter 1
 * @b: parameter 2
 * Return: the product of two numbers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two numbers
 * @a: parameter 1
 * @b: parameter 2
 * Return: the quotient
 */
int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 * mod - divides two numbers
 * @a: parameter 1
 * @b: parameter 2
 * Return: the remainder after division
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
