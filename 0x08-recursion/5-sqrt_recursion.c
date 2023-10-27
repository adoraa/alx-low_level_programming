#include "main.h"
/**
 * _sqrt - performs square root operation
 * @n: input number variable
 * @count: counter variable
 * Return: the square root or -1
 */
int _sqrt(int n, int count)
{
	if (count * count == n)
		return (count);
	else if (count * count > n)
		return (-1);
	else
		return (_sqrt(n, count + 1));
}
/**
 * _sqrt_recursion - returns the natural square root
 * of a number.
 * @n: number variable
 * Return: If n does not have a natural square root,
 * the function should return -1.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
