#include <stdio.h>
#include "max.h"

int max(int *iptr[], int n)
{	
	int tmp = *iptr[0];

	for(int i = 1; i < n; i++)
	{
		if(tmp < *iptr[i])
		{
			tmp = *iptr[i];
		}	
	}

	return tmp;
}






