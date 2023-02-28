#include"main.h"

/**
 *print_string - prints a string
 *@string: string to printed
 *Return : void
 */
void print_string(char *string)
{
	while (*string)
	{
		_putchar(*string);
		string += 1;
	}
}

/**
 *print_int - prints an integer
 *@number: number to be printed
 *Return: void
 */
void print_int(int number)
{
	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}
	if (number > 9)
	{
		print_int(number / 10);
	}
	_putchar('0' + (number % 10));
}

/**
 *print_array - print a series of integers
 *@array: array of integers to be printed
 *@array_length: length of the array
 *Return: void
 */
void print_array(int *array, int array_length)
{
	int index = 0;
	while (index < array_length)
	{
		print_int(array[index]);
		if ((index + 1) != array_length)
		{
			print_string(", ");
		}
		index += 1;
	}
	_putchar('\n');
}

