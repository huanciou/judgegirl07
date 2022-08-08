#include <stdio.h>

void LCM();

int num[500000] = {0};
int n = 0;

int main()
{

	while(scanf("%d", &num[n]) != EOF)
	{
		n++;
	}

	//LCM(n, num);

	return 0;
}

/*void LCM()
{
	for(int i = 1; i < 2100000000; i++)
	{
		for(int j = 0; j <= n; j++)
		{
			if (i % num[j] == 0)
			{	
				if(j == n-1)
				{
					printf("%d", i);
					return;
				}
				continue;
			}
			else
			{
				break;
			}
		}
	}
	
} */
