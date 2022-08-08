#include <stdio.h>
#include "fill_array.h"

void fill_array(int *ptr[], int n)
{	
	int right, sum, left_site, right_site = 0;
	int left = *ptr[0];

	for(int i = 0; i < 100; i++)
	{
		*(*(ptr + i)) = -1;
	}

	for(int i = 0; i < n; i++)
	{
		*ptr[i] = i;
	}
	
	for(int i = 0; i < 100; i++)
	{	
		if(*(*(ptr + i)) != -1)
		{	
			right_site = i;
			right = *(*(ptr + i));
			sum = left + right;
			left = right;
			i = left_site + 1 ;
			left_site = right_site;
			continue;
		}
		else
		{
			*(ptr + i) = &sum;
		}
		
	}

	return;

}
