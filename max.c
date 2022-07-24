#include <stdio.h>


int max (int array[5][5])
{
	int maximum = 0;

	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if( array[i][j] > maximum)
			{
				maximum = array[i][j];
			}
		}
	}

	return maximum;
}
