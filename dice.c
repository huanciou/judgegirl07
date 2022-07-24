#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srandom(time(0));
	int arr[7] = {0};
	
	for(int i = 0; i < 60000000 ; i++)
	{
		for(int j = 1; j <= 6; j++)
		{
			int rand_ = 1 + random() % 6 ;
			
			if( rand_ == j )
			{
				arr[j]++;
			}
		}

	}
	double dice[7] = {	(double)arr[0],
						(double)arr[1], 
				  		(double) arr[2],																		  		(double) arr[3],
						(double) arr[4],	
						(double) arr[5],																				(double) arr[6]
					};
		
	for(int j = 1; j <= 6; j++)
	{
		printf("%.0f %.2f％\n", dice[j], 100*dice[j]/60000000);
	}

	return 0;
	
}
