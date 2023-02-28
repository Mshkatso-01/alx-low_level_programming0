#include"main.h"

/**
 *print_rev - print a string in reverse
 *@s: pointer to the string to be printed
 *Return: void
 */
void _puts(char *string)
{
	while(*string)
	{
		_putchar(*string);
		string += 1;
	}
	_putchar('\n');
}

