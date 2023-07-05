#include "main.h"


int actual_sqrt_recursion(int n, int a);



/**
* _sqrt_recursion - returns the natural square root of a number
*
* @n: number to calculate the square root of
*
* Return: the resulting square root
*
*/

int _sqrt_recursion(int n)

{

	if (n < 0)
{
	return (-1);
}
	return (actual_sqrt_recursion(n, 0));

}


/**
* actual_sqrt_recursion - recurses to find the natural
*
* square root of a number
*
* @n: number to calculate the sqaure root of
*
* @a: iterator
*
* Return: the resulting square root
*/

int actual_sqrt_recursion(int n, int a)

{

	if (a * a > n)
{
	return (-1);
}
	if (a * a == n)
{
	return (a);
}
	return (actual_sqrt_recursion(n, a + 1));

}


