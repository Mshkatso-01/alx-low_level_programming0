#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x = 0;
	char y;

	while (x < 10)
	{
		y = 'a';
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');

		x++;
	}
}


