#include <stdio.h>

/**
 * main - : Program that prints the first 50 Fibonacci numbers
 * Return: Always 0 if no error
 */

int main(void)
{
	long int i, j, k, l

	j = 1;
	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}

		else
		{
			printf("%ld\n", j);
		}
                
		= j + k;				           j = k;
		k = l;
	}

	return (0);
}
