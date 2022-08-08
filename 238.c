#include <stdio.h>

int f(int arr[], int n, int k)
{	
	int count = 0;

	for(int i = 0; i < n; i++)
	{	
		if( arr[i] == k)
		{
			count++;
		}
		else if( arr[i] + arr[i+1] == k && ( i != n-1) )
		{
			count++;
		}
	}

	return count;
}

int main()
{
	int n, k;
	scanf("%d", &n);
	int arr[n];
	int result[10000] = {0};
	int timer = 0;
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	while(scanf("%d", &k) != EOF)
	{	
		result[timer] = f(arr, n, k);
		timer++;
	}
	
	for(int i = 0; i < timer; i++)
	{
		printf("%d\n", result[i]);
	}
	return 0;
}
