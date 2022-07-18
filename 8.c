#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if( a + b <= c || b + c <= a || c + a <= b)
	{
		printf("0\n");
	}
	else
	{
		printf("1\n");
	}

	return 0;

}
