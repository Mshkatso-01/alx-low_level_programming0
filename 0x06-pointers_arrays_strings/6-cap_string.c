/**
 *is_alphabet - returns wherther a character is alphabet
 *@character: the character to be checked
 *Return: int - check result as a bool value
 */
int is_alphabet(char character)
{
	return ((character >= 'a') && (character <= 'z'));
}

/**
 *is_delimeter - returns whether a character is a delimeter
 *@character: the character to be checked
 *Return: int - check result as a bool value
 */
int is_delimeter(char character)
{
	char delimeters[] = " \t\n,;.!?\"(){}";

	for (int i = 0; delimeters[i]; i += 1)
	{
		if(delimeters[i] == character)
		{
			return (1);
		}
	}
	return (0);
}


/**
 *cap_string - capitalize characters of string
 *@string: the string parameter
 *Return: char* - the string after capitalization
 */
char *cap_string(char *string)
{
	int i = 0;
	
	while (string[i])
	{
		if (is_alphabet(string[i]))
		{
			string[i] -= 32;
		}
		else if (is_delimeter(string[i]) && is_alphabet(string[i + 1]))
		{
			i += 1;
			string[i] -= 32;
		}
		i += 1;
	}
	return (string);	
}

