#include <stdio.h>

/**
 * main - Entry
 * Description: A program that us printf
 * Return: 0
*/

int main(void)
{

	char la;
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'z'; la--)
		putchar(la);

	putchar('\n');

	return (0);
}
