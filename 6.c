#include <stdio.h>

int main()
{
	int x;
	int temp;

	scanf("%d", &x);

	if( x < 100 || x > 999)
	{
		return 0;
	}
	
	temp = x;
	
	x = x / 100;
	temp = temp % 100;
	
	printf("%d\n", x);
	
	x = temp;

	x = x / 10;
	temp = temp % 10;

	printf("%d\n", x);
	printf("%d\n", temp);

	return 0;

}


