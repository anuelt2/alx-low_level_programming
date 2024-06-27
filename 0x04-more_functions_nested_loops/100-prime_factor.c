#include <stdio.h>
#include <math.h>

/**
 * main - Prints largest prime factor of number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	const long num = 612852475143;
	long num_factor, maxpf;
	double num_sqrt = sqrt(num);

	for (num_factor = 1; num_factor <= num_sqrt; num_factor++)
		if (num % num_factor == 0)
			maxpf = num / num_factor;
	printf("%ld\n", maxpf);

	return (0);
}
