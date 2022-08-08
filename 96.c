#include <stdio.h>

int main()
{
	double a, b, c, area = 0;
	double pi = 3.1415926;

	scanf("%lf %lf %lf", &a, &b, &c);


	if(c < b && c < a)
	{
		area = c * c * pi * 0.75;
		printf("%lf", area);
	}
	else if(c > b && c > a)
	{
		area = ( c * c * pi * 0.75 ) + (0.25 * pi * ((c-a)*(c-a)+(c-b)*(c-b)));
		printf("%lf", area);
	}
	else if (c>b)
	{
		area = ( c * c * pi * 0.75 ) + (0.25 * pi * ((c-b)*(c-b)));
		printf("%lf", area);

	}
	else if (c>a)
	{
		area = ( c * c * pi * 0.75 ) + (0.25 * pi * ((c-a)*(c-a)));
		printf("%lf", area);

	}

	return 0;
}
