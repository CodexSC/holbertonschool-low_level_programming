#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random integer and prints whether it is
 *        positive, negative, or zero
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	/* Seed the random number generator */
	srand(time(0));

	/* Generate a random number between -RAND_MAX/2 and RAND_MAX/2 */
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
