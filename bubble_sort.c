#include <stdio.h>

int main()
{
	int bubble[10] = {0};
	int temp = 0;

	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &bubble[i]);
	}

	for(int i = 0; i < 9; i++)
	{
		if( bubble[i] > bubble [i+1])
		{
			temp = bubble[i];
			bubble[i] = bubble[i+1];
			bubble[i+1] = temp;
			i = -1;
		}
			printf("%d\n", bubble[0]);
	}

	for(int i = 0; i < 10; i++)
	{
		printf("%d = %d\n", i+1, bubble[i]);
	}

	return 0;
}



