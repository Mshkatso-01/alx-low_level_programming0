/**
 *rev_array - reverse contents of arra
 *@array: the array
 *@length: array length
 *Return: void
 */
void rev_array(int *array, int length)
{
	int index = 0;
	int index2;
	int temp;
	int max;

	max = length / 2;
	while (index <= max)
	{
		index2 = length - index - 1;
		temp = array[index];
		array[index] = array[index2];
		array[index2] = temp;
		index += 1;
	}
}

