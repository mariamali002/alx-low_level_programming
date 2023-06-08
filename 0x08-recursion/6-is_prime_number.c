#include "main.h"

/**
 * _pri - method to get prime number
 * @n: number
 *
 * Return: square number
 */
int _pri(int n, int y)
{
int count = 0;
if (y <= n)
{
if (n % y == 0)
count++;
return (count + _pri(n, y + 1));
}
return (count);
}
/**
 * is_prime_number - method to get prime number
 * @n: number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
if (_pri(n, 1) == 2)
return (1);
else
return (0);
}
