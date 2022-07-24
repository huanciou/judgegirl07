#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n = 5;
	
	printf("輸入一個奇數來畫菱形：\n");

	scanf("%d", &n);			
	
	if( n < 0 || n % 2 == 0)
	{
		return 0;
	}

	for(int i = 1; i <= n; i += 2) 
	{
		int space = (n-i) / 2;

		for(int j = 1; j <= i; j++) // 星星數
		{
			for(; space > 0; space-- ) // 空白數
			{
				printf(" ");
			}

			printf("*");
		}

			printf("\n");
	}
	

	for(int i = n-2 ; i >= 1; i -= 2) 
	{
		int space = (n-i) / 2;

		for(int j = 1; j <= i; j++) // 星星數
		{
			for(; space > 0; space-- ) // 空白數
			{
				printf(" ");
			}

			printf("*");
		}

			printf("\n");
	}

	getchar();

	return 0;
}
