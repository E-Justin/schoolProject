#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int integer;
	int remainder;

	printf( "Please enter an integer\n");
	scanf_s("%i", &integer);
	printf("The number you entered is: %i\n", integer);

	int prime();
	{
	
		if (integer ==1)
		{
			printf("The number you entered is neither prime or composite\n");
			printf("The number 1 only has one factor\n");
			return;
		}
		if (integer == 0)
		{
			printf("The number you entered is neither prime or composite\n");
			printf("The number 0 has an infinite number of factors\n");
			return;
		}
		if(integer ==2)
		{
			printf("The number you entered is prime\n");
			printf("The number 2 is the only even prime number\n");
			printf("Return 1");
			return;
		}
		
		else
		{
			remainder = integer % 2;
		}

		if (remainder == 0)
		{
			printf("The number you entered is composite\n");
			printf("Return 0\n");
		}

		else
		{
			printf("The number you entered is prime\n");
			printf("Return 1\n");
		}
		

		return;
	}



	return 0;
}

