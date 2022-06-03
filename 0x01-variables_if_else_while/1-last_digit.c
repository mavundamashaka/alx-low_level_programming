#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * * main - Program entry point
 *  * Description: Prints a random num and whether it's greater than 5,
 *   * equal to 0 or less than 6 and not equal to 0
 *    * Return: 0
 */
int main(void)
{
		int n;
		int x;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		x = n % 10;

		if (x > 5)
			printf("Last digit of %i is %i and is greater than 5\n", n, x);
		else if (x == 0)
			printf("Last digit of %i is %i and is 0\n", n, x);
		else if (x < 6)
			printf("Last digit of %i is %i and is less than 6 and not 0\n", n, x);
	
		return (0);
}
