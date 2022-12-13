#include <stdio.h>

/**
 * main - Entry
 * Description: A program that us printf
 * Return: 0
*/

int main(void)
{

	char la;

	for (la = 'z'; la >= 'a'; la--)
		putchar(la);

	putchar('\n');

	return (0);
}
