#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: The pointer to the memory area
 * @b: The value to be set
 * @n: The number of bytes to be set
 *
 * Return: The pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;

    while (n > 0)
    {
        *s = b;
        s++;
        n--;
    }

    return ptr;
}

