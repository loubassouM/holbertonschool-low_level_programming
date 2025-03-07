#include "main.h"
#include <stdio.h>
/**
 * find_sqrt - Recursively finds the natural square root of a number.
 * @n: The number to find the square root of.
 * @guess: The current number being tested as the square root.
 *
 * Return: The natural square root, or -1 if it does not exist.
 */
int find_sqrt(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root, or -1 if none exists.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_sqrt(n, 1));
}
