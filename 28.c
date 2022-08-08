#include <stdio.h>

// Recursion 

int rec(int x)
{	
	
	if( x == 1 || x == 0 )
	{
		return x;
	}
	else
	{
		return x*x + rec(x-1);	
	}
	
	return -1;
}

int main()
{	
	int n;

	scanf("%d", &n);

	n = rec(n);

	printf("%d", n);

	return 0;

}
