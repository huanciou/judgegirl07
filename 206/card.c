#include <stdio.h>
#include "card.h"

void shuffle(int *deck[])
{	
	int i = 0;
	int deck_2[10000];
	int k = 0;

	for(; deck[i] != NULL; i++ )
	{
		//
	}
	
	if( i%2 == 1)
	{
		i++;
		i = i/2;
	}
	else
	{
		i = i/2;
	}

	for(int j = 0;deck[j] != NULL; j++)
	{
		if(j%2 == 0)
		{
			deck_2[j] = *(deck[k]);
			k++;
		}
		else
		{
			deck_2[j] = *(deck[i]);
			i++;
		}
	}
	
	for(int j = 0; deck[j] != NULL; j++)
	{
		*deck[j] = deck_2[j]; 
	}
	return;
}

void print(int *deck[])
{	if(deck[0] == NULL)
	{
		return;
	}	
	int i = 0;
	for(;deck[i+1] != NULL; i++)
	{
		printf("%d",*deck[i]);
		printf(" ");
	}

	printf("%d", *deck[i]);

	return;
}
