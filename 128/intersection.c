#include <stdio.h>
#include "intersection.h"

void intersection(int map[100][100], int result[4])
{
	int world[102][102] = {0};
	int up, down, left, right = 0;
	
	for(int i = 0; i < 4; i++)
	{
		result[i] = 0;
	}
	
	for(int i = 1; i <= 100; i++)
	{
		for(int j = 1; j <= 100; j++)
		{
			world[i][j] = map[i-1][j-1];  // 1,2 == 0,1 ;  100,100 == 99,99
		}
	}

	for(int i = 1; i <= 100; i++)
	{
		for(int j = 1; j <= 100; j++)
		{
			up = world[i-1][j];
			down = world[i+1][j];
			left = world[i][j-1];
			right = world[i][j+1];
			
			if(world[i][j] == 1)
			{
				if(up+down+left+right == 4)
					result[0]++;
				else if(up+down+left+right == 3)
					result[1]++;
				else if(up+down+left+right == 2)
					if(up+down == 2 || left+right == 2)
						continue;
					else
						result[2]++;
				else if(up+down+left+right == 1)
					result[3]++;
			}
			
		}
	}
	
	return;
}
