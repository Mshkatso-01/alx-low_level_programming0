#include"main.h"

/**
 *string_length - print a string in reverse
 *@string: pointer to the string to be printed
 *Return: void
 */
void print_rev(char *string)
{
	int index = 0;

	while (string[index])
	{
		index += 1;
	}
	while (index > 0)
	{
		index -= 1;
		_putchar(string[index]);
	}
	_putchar('\n');
}

