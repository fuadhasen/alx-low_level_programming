#include "main.h"

/**
 * flip_bits - bit flip
 * @n: first num
 * @m: num 2
 *
 * Return: number of bit  to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, y;
	unsigned int w, z;

	w = 0;
	y = 1;
	x = n ^ m;
	for (z = 0; z < (sizeof(unsigned long int) * 8); z++)
	{
		if (y == (x & y))
			w++;
		y <<= 1;
	}

	return (w);
}
