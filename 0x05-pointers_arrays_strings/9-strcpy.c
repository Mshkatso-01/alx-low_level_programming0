char* _strcpy(char* Dest, char* Str)
{
	int Index = 0;
	while(Str[Index] != '\0')
	{
		Dest[Index] = Src[Index];
		Index += 1;
	}
	Dest[Index] = '\0';
	return Dest;
}

