#include <stdio.h>
#include <stdbool.h>

int main()
{
	int year = 0;
	int month = 3;
	int week = 6;

	int month_box[13] = {29, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int number_box[31] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
						  11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
						  21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};

	bool leap_year = false;

	scanf("%d %d %d", &year, &month, &week);
	
	while(1) // 偵錯 不合法年月日輸出 invalid
	{
		if( year < 1000 || year > 3000)
		{
			printf("invalid\n");
			return 0;
		}
		if( month <= 0 || month > 12 )
		{
			printf("invalid\n");
			return 0;
		}
		if( week < 0 || week > 6 )
		{
			printf("invalid\n");
			return 0;
		}
		
		break;
	}


	int i;
	
	// 判斷是否為閏年
	
	if(year % 4 == 0 && year % 100 != 0)
	{
		leap_year = true;
	}
	if( year % 400 == 0)
	{
		leap_year = true;
	}


	while (1) // 決定第二行開始的日期
	{
		if (week == 1)
		{
			i = 7;
			break;
		}
		else if (week == 2)
		{
			i = 6;
			break;
		}
		else if (week == 3)
		{
			i = 5;
			break;
		}
		else if (week == 4)
		{
			i = 4;
			break;
		}
		else if (week == 5)
		{
			i = 3;
			break;
		}
		else if (week == 6)
		{
			i = 2;
			break;
		}
		else if (week == 0)
		{
			i = 8;
			break;
		}
	}

	printf(" Su Mo Tu We Th Fr Sa\n");

	printf("=====================\n");

	if (week == 1)
	{
		printf("   %3d%3d%3d%3d%3d%3d\n", number_box[0], number_box[1], number_box[2],
			   number_box[3], number_box[4], number_box[5]);
	}

	else if (week == 2)
	{
		printf("      %3d%3d%3d%3d%3d\n", number_box[0], number_box[1], number_box[2],
			   number_box[3], number_box[4]);
	}

	else if (week == 3)
	{
		printf("         %3d%3d%3d%3d\n", number_box[0], number_box[1],
			   number_box[2], number_box[3]);
	}

	else if (week == 4)
	{
		printf("            %3d%3d%3d\n", number_box[0], number_box[1],
			   number_box[2]);
	}
	else if (week == 5)
	{
		printf("               %3d%3d\n", number_box[0], number_box[1]);
	}

	else if (week == 6)
	{
		printf("                  %3d\n", number_box[0]);
	}

	else if (week == 0)
	{
		printf("%3d%3d%3d%3d%3d%3d%3d\n", number_box[0], number_box[1], number_box[2],
			   number_box[3], number_box[4], number_box[5], number_box[6]);
	}

	if (leap_year == true && month == 2) // 閏月 29 天
	{
		for (; i <= 29; i += 7)
		{
			if (i + 7 <= 29)
			{
				printf("%3d%3d%3d%3d%3d%3d%3d\n", number_box[i - 1], number_box[i], number_box[i + 1],
					   number_box[i + 2], number_box[i + 3], number_box[i + 4], number_box[i + 5]);
			}
			else // 如果會超過最後一天, 一個一個印並檢查有沒有差過
			{
				for (; i <= 29; i++)
				{
					printf("%3d", number_box[i - 1]);
				}
			}
		}
		printf("\n");
	}

	else if (month_box[month] == 30) // 小月 30 天
	{
		for (; i <= 30; i += 7)
		{
			if (i + 7 <= 30)
			{
				printf("%3d%3d%3d%3d%3d%3d%3d\n", number_box[i - 1], number_box[i], number_box[i + 1],
					   number_box[i + 2], number_box[i + 3], number_box[i + 4], number_box[i + 5]);
			}
			else // 如果會超過最後一天, 一個一個印並檢查有沒有差過
			{
				for (; i <= 30; i++)
				{
					printf("%3d", number_box[i - 1]);
				}
			}
		}
		printf("\n");
	}
	else if (leap_year == false && month == 2) // 二月 28 天
	{
		for (; i <= 28; i += 7)
		{
			if (i + 7 <= 28)
			{
				printf("%3d%3d%3d%3d%3d%3d%3d\n", number_box[i - 1], number_box[i], number_box[i + 1],
					   number_box[i + 2], number_box[i + 3], number_box[i + 4], number_box[i + 5]);
			}
			else // 如果會超過最後一天, 一個一個印並檢查有沒有差過
			{
				for (; i <= 28; i++)
				{
					printf("%3d", number_box[i - 1]);
				}
			}
		}
		printf("\n");
	}
	else // 大月 31 天
	{
		for (; i <= 31; i += 7)
		{
			if (i + 7 <= 31)
			{
				printf("%3d%3d%3d%3d%3d%3d%3d\n", number_box[i - 1], number_box[i], number_box[i + 1],
					   number_box[i + 2], number_box[i + 3], number_box[i + 4], number_box[i + 5]);
			}
			else // 如果會超過最後一天, 一個一個印並檢查有沒有差過
			{
				for (; i <= 31; i++)
				{
					printf("%3d", number_box[i - 1]);
				}
			}
		}
		printf("\n");
	}

	printf("=====================\n");

	return 0;

}
