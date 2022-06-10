



77;30500;0c#include <stdio.h>

/**
 * main - Prints the numbers from 1-100, print fizz for multiples of three,
 *        print Buzz for multiples of five,
 *        print FizzBuzz for multiple of both three and five
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 1; num < 100; ++num)
	{
		if ((num % 3) == 0)
			printf("Fizz ");

		else if ((num % 5) == 0)
			printf("Buzz ");

		else if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz ");

		else
			printf("%d ", num);

	}

	printf("Buzz\n");

	return (0);
}
