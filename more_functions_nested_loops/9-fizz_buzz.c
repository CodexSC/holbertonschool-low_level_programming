#include <stdio.h>

/*
* FizzBuzz function prints numbers from 1 to n with the following rules:
* - For multiples of 3, print "Fizz" instead of the number.
* - For multiples of 5, print "Buzz" instead of the number.
* - For multiples of both 3 and 5, print "FizzBuzz" instead of
*   the number.
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
