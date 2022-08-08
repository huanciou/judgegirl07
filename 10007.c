#include <stdio.h>

void count_of_segments(int n, int box[10000]);
	
int main()
{
	int n;

	while(scanf("%d", &n) != EOF)
	{	
		int box[n];

		for(int i = 0; i < n; i++)
		{
			scanf("%d", &box[i]);		
		}
		
		count_of_segments(n,box);
	}
	
	return 0;
}



void count_of_segments(int n, int box[10000])
{	
	int count = 1;
		
	for(int i = 1; i < n; i++)
	{
		if( box[i] == box[i-1])
		{
			//
		}	
		else
		{	
			count++;
		}
	}

	printf("%d", count);
	
	return;
}
