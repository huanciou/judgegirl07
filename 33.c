#include <stdio.h>

int main()
{
	int n, intersection, T_junction, turn, deadline = 0;
	int world[102][102] = {0};
	scanf("%d", &n);
	int up, down, left, right = 0;

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			scanf("%d", &world[i][j]);
		}
	}

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			up = world[i-1][j];
			down = world[i+1][j];
			left = world[i][j-1];
			right = world[i][j+1];

			if(world[i][j] == 1)
			{
				if(up+down+left+right == 4)
					intersection++;
				else if(up+down+left+right == 3)
					T_junction++;
				else if(up+down+left+right == 2)
					if(up+down == 2 || left+right ==2)
						continue;
					else
						turn++;
				else if(up+down+left+right == 1)
					deadline++;
			}
				
		}
	}
	
	printf("%d\n%d\n%d\n%d",intersection, T_junction, turn, deadline);
	return 0;
}
