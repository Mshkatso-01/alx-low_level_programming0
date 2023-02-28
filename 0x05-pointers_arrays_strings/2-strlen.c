int _strlen(char* String)
{
	int Result = 0;
	while(*String)
	{
		Result += 1;
		String += 1;
	}
	return Result;
}

