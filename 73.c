#include <stdio.h>
#include <stdbool.h>

int main()
{	
	// 73. 3n, 3n+1, and 3n+2 
	
	int check_1 = 0;
	int check_3n1 = 0;
	int check_3n2 = 0;

	int numbers_of_integer = 0;

	scanf("%d\n", &numbers_of_integer);
	
	int box_numbers = numbers_of_integer - 1;
	int box[box_numbers];

	for(int i = 0; i < numbers_of_integer; i++)
	{
		scanf("%d", &box[i]);
	}

	for(int j = 0; j <= box_numbers; j++)
	{
		if( box[j] % 3 == 0 )
		{
			check_1++;
		}
		else if( box[j] % 3 == 1 )
		{
			check_3n1++;
		}
		else if( box[j] % 3 == 2 )
		{
			check_3n2++;
		}
	}
	
	printf("%d %d %d\n", check_1, check_3n1, check_3n2);


	return 0;
}

