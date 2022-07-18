#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
	int32_t s; // total number of animals
	int32_t f; // total number of legs
	int32_t t; // total number of tails

	int32_t chicken;
	float rabbit;
	int32_t crab;
	
	scanf("%d", &s);
	scanf("%d", &f);
	scanf("%d", &t);
	
	crab = abs(s - t);
	rabbit = abs(f - ( 2 * s) - ( 6 * crab));
	rabbit = (float) rabbit / 2;
	chicken = s - rabbit - crab;
	
	if( chicken == 0 && rabbit == 0 && crab == 0 )
	{
		printf("%d\n%.0f\n%d\n", chicken, rabbit, crab);
	}
	else if( chicken <= 0 || rabbit <= 0 || crab <= 0 )
	{
		printf("0\n");
	}
	else if( rabbit + chicken != t)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n%.0f\n%d\n", chicken, rabbit, crab);
	}

	return 0;

	


}
