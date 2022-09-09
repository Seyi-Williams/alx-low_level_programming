#include <stdio.h>

/**
 * main - Run numbers between 0 to 9 with commas and spaces.
 *
 * Return: 0 (Normal)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
