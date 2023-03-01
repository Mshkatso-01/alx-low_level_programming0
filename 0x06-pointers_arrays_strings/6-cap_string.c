/**
 *cap_string - capitalize word of string
 *@string: the string to capitalize
 *Return: char * - the new string
 */
char *cap_string(char *string)
{
	int i = 0;
	int j = 0;
	char delimeters[] = " \t\n,;.!?\"(){}";

	while (string[i])
	{
		if (string[0] >= 'a' && string < 'z')
		{
			string[0] -= 32;
		}
		while (delimeters[j])
		{
			if ((string[i] == delimeters[j]) && ((string[i + 1] >= 'a') && (string[i + 1] <= 'z')))
			{
				string[i + 1] -= 32;
			}
			j += 1;
		}
		i += 1;
	}
	return (string);
}

