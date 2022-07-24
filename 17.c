#include <stdio.h>


int main()
{

	int r,c;

	scanf("%d %d", &r, &c);
	
	int arr[r][c];

	int n = r * c;
	int sum = 0;

	for(int i = 0; i < r; i++ )
	{
		for(int j = 0; j < c; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i = 0; i < c; i++)
	{
		for(int j = 0; j < r; j++)
		{
			sum += arr[j][i];
		}

		sum = sum / r;
		printf("%d\n", sum);
		sum = 0;
	}

	return 0;
}
