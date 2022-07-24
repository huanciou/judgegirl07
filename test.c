#include <stdio.h>

void put_into_box(int x);
void lottery();

int lottery_num;
int num;

int box[8]; //開獎號碼
int num[8]; //自選號碼

	int main()
	{	
		while(scanf("%d % %d %d %d %d %d", ))
		return 0;
	}


	void lottery()
	{
		for(int i = 7; i >= 0; i--)
		{
			num[i] = num % 10;
			num = num / 10;
		}



		
		
	}	

	void put_into_box(int x)
	{
		for(int i = 7; i >= 0; i--)	// 特獎一等獎全部變array.
		{
			box[i] = x % 10;
			x = x / 10;

			return;			
		}
	}
