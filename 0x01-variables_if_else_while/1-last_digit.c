#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	int min;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	min = n % 10;
	if (min > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, min);
	if (min == 0)
		printf("Last digit of %d is %d and is 0\n", n, min);
	if (min < 6 && min != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, min);
	return (0);
}
