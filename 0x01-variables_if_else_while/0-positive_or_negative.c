#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: prints if generated number is positive, negative or zero
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		printf("%d is negative", n);
	if (n > 0)
		printf("%d is positive", n);
	else
		printf("%d is zero", n);

	return (0);
}
