#include <stdio.h>
#include <stdint.h>


int main()
{
	uint32_t n = 0;
	
	scanf("%u", &n);
	
	int i = n - 1;
	int j = 1;
	
	if( n == 1 )
	{
		printf("1\n");
		return 0;
	}

	for(; i >= 1; i--)
	{
		for(; j <= n; j++)
		{
			printf("%d\n", j);
		}

		printf("%d\n", i);
	}
	
	return 0;

}
