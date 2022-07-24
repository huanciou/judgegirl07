#include <stdio.h>


int main()
{
	int n;

	scanf("%d", &n);

	for(int i = 2; i <= n ; i++)
	{
		for(int j = 1; j < i; j++)
		{
			if(i % j == 0 && i != 2 && j != 1)
			{	
				break;
			}
			if(j == i-1 || i == 2)
			{
				printf("%d\n",i);
			}
		}
	}
	
	return 0;
}
