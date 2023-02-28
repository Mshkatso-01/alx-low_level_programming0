#include"main.h"

/**
 *puts_half - print other half of string
 *@string: string to be printed
 *Return : void
 */
void puts_half(char *string)
{
	int length = 0;
	int odd_length;
	int index;

	while(string[length])
	{
		length += 1;
	}
	odd_length = (length % 2 != 0);
	index = length;
	if(odd_length)
	{
		index += 1;
	}
	index /= 2;
	while(string[index])
	{
		_putchar(string[index]);
		index += 1;
	}
	_putchar('\n');
}

