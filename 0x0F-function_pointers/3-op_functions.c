#include "3-calc.h"

/**
 * op_add - Computes the sum of two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Computes the difference of two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Computes the product of two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Computes the quotient of two numbers.
 * @a: The dividend.
 * @b: The divisor (non-zero).
 *
 * Return: The quotient of a divided by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Computes the remainder of the division of two numbers.
 * @a: The dividend.
 * @b: The divisor (non-zero).
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
