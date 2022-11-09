#include "main.h"
/**
 * prime2 -makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: On succes 1
 * On error, -1 is returned
 */
int prime2(int a, int b)
{
	if (a == b - 1)
		return (1);
	else if (a % b == 0)
		return (0);
	if (a % b != 0)
		return (0);
	return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 * Return: On success 1
 * On error, -1 is returned
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (prime2(n, 2));
}
