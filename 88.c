#include <stdio.h>


int main()
{
	int value;
	int answer;

	scanf("%d %d", &value, &answer);

	// 把 value 與 answer 拆成 array
	
	int value_box[4] = {0};
	int answer_box[4] = {0};
	
	int A = 0;
	int B = 0;

	for(int i = 3; i >= 0; i--)
	{
		value_box[i] = value % 10;
		answer_box[i] = answer % 10;
		
		value = value / 10;
		answer = answer / 10;
	}

	// 兩個 array 檢查
	
	for( int m = 0; m < 4; m++ )
	{
		for( int n = 0; n < 4; n++ )
		{
			if( ( value_box[m] == answer_box[n] ) && ( value_box[m] == answer_box[m] ) )
			{
				A++;
				break;
			}
			else if( ( value_box[m] == answer_box[n] ) && ( value_box[m] != answer_box[m] ) )
			{
				B++;
				break;
			}
			else
			{
				// do nothing.
			}	
	
		}

	}
	
	// 輸出AB value
	
	printf("%dA%dB", A,B);

	return 0;

}
