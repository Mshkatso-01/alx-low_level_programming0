#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of the last digit
 */
int print_last_digit(int n)
{
	int nr;

	if (n < 0)
	{
		nr = -1 * (n % 10);
		_putchar(nr + '0');
		return (nr);
	}
	else
	{
		nr = n % 10;
		_putchar(nr + '0');
		return (nr);
	}
}

