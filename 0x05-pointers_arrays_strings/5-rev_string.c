/**
 * rev_string - prints a string in reverse
 *@string: pionter to the string to be reverserd
 *Return: void
 */
void rev_string(char *string)
{
	int index = 0;
	int length = 0;
	int max;
	int other_index;
	char temp;

	while (string[length])
	{
		length += 1;
	}
	max = length / 2;
	while (index < max)
	{
		other_index = length - index - 1;
		temp = string[index];
		string[index] = string[other_index];
		string[other_index] = temp;
		index += 1;
	}
}

