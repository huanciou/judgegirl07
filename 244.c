#include <stdio.h>

void count(int x);

int cash = 0;
int special = 0;
int sum = 0;
int special_prize[8];
int first_prize[8];


int main()
{

	int numbers;
	int special_prize_num, first_prize_num;
	
			printf("0\n");		
	scanf("%d %d", &special_prize_num,&first_prize_num);
			printf("2\n");		
	
	for(int i = 7; i >= 0; i--)
	{	
		printf("%d\n", i);
		special_prize[i] = special_prize_num % 10;
		special_prize_num = special_prize_num / 10;
		first_prize[i] = first_prize_num % 10;
		first_prize_num = first_prize_num / 10;
		
	}
		printf("出來了\n");	
	/*while*/numbers = 11111111;

			printf("1\n");		
			count(numbers);
	


	return 0;

}

void count(int x)
{	
	int check[8] = {0};

	for(int i = 7; i >= 0; i--)
	{
		check[i] = x % 10;
		x = x / 10;
	}
	
	for(int i = 7; i >= 0; i--)
	{
		if(check[i] == special_prize[i])
		{
			if(i==0)
			{
				special++;
			}
		}
		else
		{
			break;
		}
	}

	for(int i = 7; i >= 0; i--)
	{	
		if(check[i] == first_prize[i])
		{
			cash++;
		}
	}
	
	while( cash >= 3 || special >= 1 )
	{
		if(cash == 3 ){sum+=200;}
		else if(cash == 4 ){sum+=1000;}
		else if(cash == 5 ){sum+=4000;}
		else if(cash == 6 ){sum+=10000;}
		else if(cash == 7 ){sum+=40000;}
		else if(cash == 8 ){sum+=200000;}
		
		if(special == 1 ){sum+=2000000;}
		
		special = 0;
		cash = 0;
	}
	
	printf("%d", sum);
 	return;	
}

