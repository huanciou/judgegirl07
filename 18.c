#include <stdio.h>

void search(int row, int col, int ptr[][col]);

int main()
{
	int col, row;
	scanf("%d %d", &row, &col);
	int array[row][col];
	
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}

	search(row, col, array);

	return 0;
}

void search(int row, int col, int ptr[][col])
{
	int max[10000] = {0};
	int count = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
			{
				if (i == 0)
				{
					if (j == 0)
					{
						if (ptr[i][j] > ptr[i][j + 1] && ptr[i][j] > ptr[i + 1][j])
						{
							max[count] = ptr[i][j];
							count++;
						}
					}
					else if (j == col - 1)
					{
						if (ptr[i][j] > ptr[i][j - 1] && ptr[i][j] > ptr[i + 1][j])
						{
							max[count] = ptr[i][j];
							count++;
						}
					}
					else
					{
						if (ptr[i][j] > ptr[i][j - 1] && ptr[i][j] > ptr[i + 1][j] &&
							ptr[i][j] > ptr[i][j + 1])
						{
							max[count] = ptr[i][j];
							count++;
						}
					}
				}
				else if (i == row - 1)
				{
					if (j == 0)
					{
						if (ptr[i][j] > ptr[i][j + 1] && ptr[i][j] > ptr[i - 1][j])
						{
							max[count] = ptr[i][j];
							count++;
						}
					}
					else if (j == col - 1)
					{
						if (ptr[i][j] > ptr[i][j - 1] && ptr[i][j] > ptr[i - 1][j])
						{
							max[count] = ptr[i][j];
							count++;
						}
					}
					else
					{
						if (ptr[i][j] > ptr[i][j - 1] && ptr[i][j] > ptr[i - 1][j] &&
							ptr[i][j] > ptr[i][j + 1])
						{
							max[count] = ptr[i][j];
							count++;
						}
					}
				}
				else if (j == 0)
				{
					if (ptr[i][j] > ptr[i - 1][j] && ptr[i][j] > ptr[i + 1][j] &&
						ptr[i][j] > ptr[i][j + 1])
					{
						max[count] = ptr[i][j];
						count++;
					}
				}
				else if (j == col - 1)
				{
					if (ptr[i][j] > ptr[i - 1][j] && ptr[i][j] > ptr[i + 1][j] &&
						ptr[i][j] > ptr[i][j - 1])
					{
						max[count] = ptr[i][j];
						count++;
					}
				}
			}
			else // 上下左右都有數字
			{
				if (ptr[i][j] > ptr[i - 1][j] && ptr[i][j] > ptr[i + 1][j] &&
					ptr[i][j] > ptr[i][j - 1] && ptr[i][j] > ptr[i][j + 1])
				{
					max[count] = ptr[i][j];
					count++;
				}
			}
		}
	}

	for (int i = 0; i < count; i++)
	{
		printf("%d\n", max[i]);
	}

	return;
}
