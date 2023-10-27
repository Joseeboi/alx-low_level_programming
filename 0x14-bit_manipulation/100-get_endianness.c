#include "main.h"

/**
 * get_endianness - function to check the endianness
 * of the system
 *
 * Return: 0 and 1 if the system is big/little endian
 *
*/

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return (*byte == 1) ? 1 : 0;
}
