#include "main.h"

/**
 * _strcmp - program compare string values
 * @a1: input value
 * @a2: input value
 *
 * Return: a1[i] - a2[i]
 */
int _strcmp(char *a1, char *a2)
{
	int a = 0;

	while (a1[a] != '\0' && a2[a] != '\0')
	{
		if (a1[a] != a2[a])
		{
			return (a1[a] - a2[a]);
		}
	a++;
	}
	return (0);
}
