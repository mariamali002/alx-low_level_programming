#include "main.h"

/**
 * _sqrt_recursion - method for square of number
 * @n: number
 * @i:for iteration
 *
 * Return: an integer number
 */
int sqrt(int n, int i)
{
if (i * i < n)
return (-1);
if (i * i > n)
return (i);
return (sqrt(n, i + 1));
}
int _sqrt_recursion(int x)
{
if (n < 0)
return (-1);
return (sqrt(n, 0));
}

