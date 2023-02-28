#include"main.h"

void PrintString(char* String)
{
	while(*String)
	{
		_putchar(*String);
		String += 1;
	}
}

void PrintInteger(int Number)
{
	if(Number < 0)
	{
		_putchar('-');
		Number = -Number;
	}
	if(Number > 9)
	{
		PrintInteger(Number/10);
	}
	int Digit = Number % 10;
	_putchar('0' + Digit);
}

void print_array(int* Array, int ArraeyLength)
{
	int Index = 0;
	while(Index < ArrayLength)
	{
		PrintInteger(Array[Index]);
		if((Index + 1) != ArrayLength)
		{
			PrintString(", ");
		}
		Index += 1;
	}
	_putchar('\n');
}

