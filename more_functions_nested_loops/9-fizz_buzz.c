#include <stdio.h>

/**
 * fizzBuzz - prints numbers from 1 to n with FizzBuzz rules
 * @n: the upper limit
 *
 * For multiples of 3, print "Fizz" instead of the number.
 * For multiples of 5, print "Buzz" instead of the number.
 * For multiples of both 3 and 5, print "FizzBuzz" instead of the number.
 */
void fizzBuzz(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz\n");
		else if (i % 3 == 0)
			printf("Fizz\n");
		else if (i % 5 == 0)
			printf("Buzz\n");
		else
			printf("%d\n", i);
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	fizzBuzz(15);
	return (0);
}
