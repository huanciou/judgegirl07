#include <stdio.h>
#include <stdlib.h>


int main()
{
	int s;
	int f;
	int t;

	int chicken;
	double rabbit;
	int crab;
	
	scanf("%d%d%d",&s,&f,&t );
	
	crab = abs(s - t);
	rabbit = abs(f - ( 2 * s ) - ( 6 * crab )); // This is 2 rabbits.
	rabbit = (double) rabbit / 2;
	chicken = s - rabbit - crab;
	
	printf("%d\n%.0f\n%d\n", chicken, rabbit, crab);
	
	return 0;
}
