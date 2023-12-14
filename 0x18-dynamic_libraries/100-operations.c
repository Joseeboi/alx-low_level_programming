#include <stdio.h>

/**
 * add - a function that add two integer
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of the two integers
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - a function that subtract two integer
 * @a: the first integer
 * @b: the second integer
 * Return: the value of the subtraction
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - a function that multiply two integer
 * @a: the first integer
 * @b: the second integer
 * Return: the product of the integer
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - a function that divides two integer
 * @a: the first integer
 * @b: the second integer
 * Return: the division of the two integers
 */
int div(int a, int b)
{
	if (b == a)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - a function that find
 * the modulus of two integer
 * @a: the first integer
 * @b: the second integer
 * Return: the modulus of the integers
 */
int mod(int a, int b)
{
	if (b == a)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
