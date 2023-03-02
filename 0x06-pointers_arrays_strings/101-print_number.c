#include"main.h"

/**
 *print_number - print an integer
 *@number: the integer to be printed
 *Return: void
 */
void print_number(int number)
{
	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}
	if (number > 9)
	{
		print_number(number / 10);
	}
	_putchar('0' + (number % 10));
}

