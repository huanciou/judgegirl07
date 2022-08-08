#include <stdio.h>
	
int main()
{
	int array[3][3] = {1};
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("[%d][%d] = %d\n", i+1, j+1, array[i][j]);
		}
	}

	return 0;
}
