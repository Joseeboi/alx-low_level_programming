#include "main.h"
#include <stdio.h>
/**
 * get_endianness - function to check the endianness
 * of the system
 *
 * Return: 0 if the system is big, 1 if little endian
 *
*/

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return (*byte == 1) ? 1 : 0;
}
