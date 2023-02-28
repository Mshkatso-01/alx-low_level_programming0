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

void SwapChars(char* C1, char* C2)
{
	char Temp = *C1;
	*C1 = *C2;
	*C2 = Temp;
}

void rev_string(char* String)
{
	int Length = StringLength(String);
	int OddLength = (Length % 2 != 0);
	int Max = Length;
	if(OddLength)
	{
		Max -= 1;
	}
	Max /= 2;
	for(int Index = 0; Index <= Max; Index += 1)
	{
		SwapChars(&String[Index], &String[Length - Index - 1]);
	}
}

