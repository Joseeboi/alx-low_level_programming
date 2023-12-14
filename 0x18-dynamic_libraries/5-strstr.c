#include "main.h"

/**
 * _stratr - program entry point
 * @haystack: input
 * @needle: input
 * Return: always 0
 */
char *_stratr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
