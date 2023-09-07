#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - malloc check
 * @b: size
 *
 * Return: no return
 */

void *malloc_checked(unsigned int b)
{
	char *new;

	new = malloc(b);
	if (new == NULL)
		exit(98);
	return (new);
}
