#include <stdio.h>


int main()
{
	int n, i;
	int sum = 1;

	scanf("%d %d", &n, &i);		

	for(int j = 0; j < i; j++)
	{
		sum *= n; 
	}

	printf("%d", sum);

	return 0;
}
