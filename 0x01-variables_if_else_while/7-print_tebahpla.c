#include <stdio.h>

/**
 * main - prints the letters of the lowercase alphabet
 *
 * Description: prints the letters of the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
