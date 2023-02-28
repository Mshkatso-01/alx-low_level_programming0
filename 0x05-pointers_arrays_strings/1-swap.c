/**
 *swap_int - swap two integers
 *@a: Pointer to the integer to be swapped with a
 *@b: Pointer to the integer to be swapped with a
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

