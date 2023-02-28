#include"main.h"

int StringLength(char* String)
{
	int Result = 0;
	while(*String)
	{
		Result += 1;
		String += 1;
	}
	return Result;
}

void puts_half(char* String)
{
	int Length = StringLength(String);
	int OddLength = (Length % 2 != 0);
	int Index = Length;
	if(OddLength)
	{
		Index += 1;
	}
	Index /= 2;
	while(String[Index])
	{
		_putchar(String[Index]);
		Index += 1;
	}
	_putchar('\n');
}

