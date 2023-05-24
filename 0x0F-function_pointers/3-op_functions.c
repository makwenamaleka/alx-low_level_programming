#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of two num.
 * @a: The first num.
 * @b: The second num.
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns diff of two num.
 * @a: The first num.
 * @b: The second num.
 * Return: The diff of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns product of two num.
 * @a: The first num.
 * @b: The second num.
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns division of two num.
 * @a: The first num.
 * @b: The second num.
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns remainder of the division of two num.
 * @a: The first num.
 * @b: The second nub.
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
