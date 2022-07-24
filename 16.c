#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);
	
	int array[n];
	
	for( int i = 0; i < n; i++)
	{
		scanf("%d", &array[i] );
	}
	
	int last_odd;
	int last_even;

	for(int m = n-1; m >= 0; m--)
	{
		if( array[m] % 2 != 0 )
		{
			last_odd = m;
			break;
		}
	}
	
	for(int o = n-1; o >= 0; o--)
	{
		if( array[o] % 2 == 0 )
		{
			last_even = o;
			break;
		}
	}

	for( int j = 0; j < n; j++)
	{
		if( array[j] % 2 != 0) // find odd num
		{
			printf("%d", array[j]);
		}
		else
		{
			continue;
		}

		if( j == last_odd )
		{
			break;
		}
		else
		{
			printf(" ");
		}
	}

	printf("\n");

	for(int k = 0; k < n; k++)
	{
		if( array[k] % 2 == 0)
		{
			printf("%d", array[k]);
		}
		else
		{
			continue;
		}
		
		if( k == last_even)
		{
			break;
		}
		else
		{
			printf(" ");
		}
	}	

	return 0;
}
