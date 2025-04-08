#include "main.h"
#include <stdio.h>

/**
* flip_bits - Counts the number of bits to flip to get from n to m
*@n: First number
* @m: Second number
* Return: Number of bits needing to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int count = 0;
while (xor_result)
{
count++;
xor_result &= (xor_result - 1);
}
return (count);
}
