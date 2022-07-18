#include <stdio.h>


int main()
{
	int n;

	scanf("%d", &n);
	
	int box[n]; 
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &box[i]);
	}
	
	for(int j = n-1; j >= 0; j--)
	{
		printf("%d", box[j]);
		
		if( j != 0)
		{
			printf(" ");
		}
	}

	return 0;	
}
