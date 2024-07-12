#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @num: The number to be checked
 * Return: absolute num
 */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (num - num - num);
}
