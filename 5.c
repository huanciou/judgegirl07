#include <stdio.h>

int main()
{
	int h;
	int w;
	int d;
	
	scanf("%i", &h);
	scanf("%i", &w);
	scanf("%i", &d);

	int surface_area = ( (h * w) + (d * h) + (w * d) ) * 2;	
	int volume = h * w * d;

	printf("%d\n", surface_area);
	printf("%d\n", volume);

	return 0;
	
}
