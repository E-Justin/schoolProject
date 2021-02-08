#include<stdio.h>

int main(void)
{
	int i = 1;


	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d : FizzBuzz\n", i);
			
		}
		else if (i % 3 == 0)
		{
			printf("%d : Fizz\n", i);
			
		}
		else if (i % 5 == 0)
		{
			printf("%d : Buzz\n", i);
			
		}
		else
		{
			printf("%d\n", i);
		}
		
			i++;
		
	}
	return 0;
}
