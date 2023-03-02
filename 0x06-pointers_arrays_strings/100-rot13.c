/**
 *rot13 - encodes a string using rot13 method
 *@string: the string to be encoded
 *Return: the string after encoding
 */
char *rot13(char *string)
{
	char *result;

	result = string;
	while (*string)
	{
		if (*string >= 'a' && *string <= 'z')
		{
			*string = 'a' + ((*string + 13) % 26);
		}
		else if (*string >= 'A' && *string <= 'Z')
		{
			*string = 'A' + ((*string + 13) % 26);
		}
		string += 1;
	}
	return (result);
}

