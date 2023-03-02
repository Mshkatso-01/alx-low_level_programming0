/**
 * rot13 - encodes string using rot13
 * @string: pointer to string params
 * Return: pointer to string
 */
char *rot13(char *string)
{
	int i = 0;
	int j = 0;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (string[i])
	{
		while (data[j])
		{
			if (string[i] == data[j])
			{
				string[i] = rotated[j];
				break;
			}
			j += 1;
		}
		j = 0;
		i += 1;
	}
	return (string);
}

