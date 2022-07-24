#include <stdio.h>

void change(int x[1]);

int main()
{
	int x[1] = {1};

	printf("%d\n", x[0]);
	
	change(x);

	printf("%d\n", x[0]);

	return 0;
}



void change(int x[1])
{
	x[0] += 4;
	
	printf("%d\n", x[0]);

	return;
}
