#include <stdio.h>

int main()
{
	int a, b, c, d, e;
	int surface_area = 0;
	int volume;

	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	surface_area =  ((a * c) - (a-e-e) * (c-e-e)) * 2 + (( b * c) - (b-e-e)*(c-e-e)) * 2 +
	       		((a * b) - (a-e-e)*(b-e-e)) * 2 +
			((a-e-e) * d * 8) + ((b-e-e) * d * 8) + ((c-e-e) * d * 8);
	       	
	volume = 1;
		
	printf("%d\n %d\n", surface_area, volume);

	return 0;

}
