#include "main.h"
/**
 * _prime - Makes possible to evaluate from 1 to n
 * @num: number variable
 * @count: counter variable
 * Return: returns 1. On error, -1 is returned,
 * and errno is set.
 */
int _prime(int num, int count)
{
	if (num == count)
		return (1);
	else if (num % count == 0)
		return (0);
	return (_prime(num, count + 1));
}
/**
 * is_prime_number - checks for prime numbers
 * @n: number to be checked
 * Return: returns 1. On error, -1 is returned, and
 * errno is set.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
