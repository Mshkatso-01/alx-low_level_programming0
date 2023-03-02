/**
 *leet - encode string to 1337
 *@string: the string to be encoded
 *Return: char * - the string after encoding
 */
char *leet(char *string)
{
	int i = 0;
	int j = 0;
	char l[] = "ol_ea__t";

	while (string[i])
	{
		while (l[j])
		{
			if (string[i] == l[j] || string[i] == (l[j] - 32))
			{
				string[i] = '0' + j;
			}
			j += 1;
		}
		i += 1;
	}
	return (string);
}

