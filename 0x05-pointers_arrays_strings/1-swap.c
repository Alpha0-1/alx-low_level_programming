/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to an int
 * @b: pointer to an int
 * This function takes two pointers to integers as
 * parameters and swaps the values they point to.
 * Return:void.
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
