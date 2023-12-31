#include "main.h"

/**
 * _memcpy - a funtion that copies memory area
 * @dest: where the memory is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory with a byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];

		n--;
	}
	return (dest);
}
