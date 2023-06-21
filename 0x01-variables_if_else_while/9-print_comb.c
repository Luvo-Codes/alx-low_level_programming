#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints combinations from 1-9
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar('0' + digit);

		if (digit != 9)
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
