#include <stdio.h>


int main()
{
	int N, M;

	scanf("%d %d", &N, &M);

	if( ( N < 10 || N > 99 ) || ( M < 1000000 || M > 9999999))
	{
		return 0;
	}
	
	int M_nums[7];
	int N_nums[2];

	N_nums[0] = N / 10;
	N_nums[1] = N % 10;

	for( int i = 6; i >= 0; i--)
	{	
		M_nums[i] = M % 10;
		M = M / 10; 
	}
	
	int count = 0;

	for(int m = 0; m <= 5; m++)
	{
		if( M_nums[m] == N_nums[0] )
		{
			if( M_nums[m+1] == N_nums[1])
			{
				count++;
			}
			else
			{
				// do nothing.
			}
		}
	}

	printf("%d\n", count);

	return 0;
}
