#include <stdio.h>

int main(void)
{
	printf("The number of bits contained in an int on my computer is: %i\n", int_size());


	return 0;
}

int int_size(void)
{
	int count = 0;
	unsigned int x = ~0;

	while (x)
	{
		x >>= 1;
		count++;
	}
	return count;
}
