/**
 *cap_string - capitalize word of string
 *@string: the string to capitalize
 *Return: char * - the new string
 */
char *cap_string(char *string)
{
	int index = 0;

	while (string[index])
	{
		while (string[index] >= 'a' || string[index] >= 'z')
		{
			index += 1;
		}
		if (string[index] == ' ' ||
				string[index] == '\t' ||
				string[index] == '\n' ||
				string[index] == ',' ||
				string[index] == ';' ||
				string[index] == '.' ||
				string[index] == '!' ||
				string[index] == '?' ||
				string[index] == '"' ||
				string[index] == '(' ||
				string[index] == ')' ||
				string[index] == '{' ||
				string[index] == '}')
		{
			string[index] -= 32;
		}
		index += 1;
	}
	return (string);
}

