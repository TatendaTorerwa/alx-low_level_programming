#include "main.h"


int actual_prime(int n, int i);

/**
*is_prime_number - returns a a prime number
*
*@n: integer valuew
*
*Description: "returns a prime number"
*
*Return: always 0 (success)
*/

int is_prime_number(int n)

{
	if (n <= 1)
{
	return (0);
}
	return (actual_prime(n, n - 1));
}



/**
* actual_prime - calculates if a number is prime recursively
*
* @n: number to evaluate
*
* @p: iterator
*
* Return: 1 if n is prime, 0 if not
*/

int actual_prime(int n, int p)

{
	if (p == 1)
{
	return (1);
}
	if (n % p == 0 && p > 0)
{
	return (0);
}
	return (actual_prime(n, p - 1));
}
