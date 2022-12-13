#include <stdio.h>

/**
 * main - Entry
 * Description: A program that us printf
 * Return: 0
*/

int main(void)
{

	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
