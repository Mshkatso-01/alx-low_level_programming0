#include"main.h"

/**
 *_puts - print a string with a newline at the end
 *@string: pointer to the string to be printed
 *Return: void
 */
void _puts(char *string)
{
	while (*string)
	{
		_putchar(*string);
		string += 1;
	}
	_putchar('\n');
}

