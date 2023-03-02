/**
* leet - encode a string to 1337
*@string: string that will be encoded
*Return: encoded string
*/
char *leet(char *string)
{
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (string[++index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (string[index1] == leet[index2] ||
			 string[index1] - 32 == leet[index2])
				string[index1] = index2 + '0';
		}
	}
	return (string);
}

