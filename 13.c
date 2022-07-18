#include <stdio.h>
#include <stdint.h>


int main()
{
	uint32_t n;

	scanf("%u", &n);

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++ )
		{
			printf("%d", j);
		}
	}
	
	printf("\n");

	return 0;
}
