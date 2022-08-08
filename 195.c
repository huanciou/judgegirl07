#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main()
{
	int n, x, y = 0;
	int board[3][3] = {0};
	bool black = true;
	bool white = false;
	int row_1, row_2, row_3, col_1, col_2, col_3, slash_1, slash_2, sum = 0;

	scanf("%d", &n);

	for (int i = 0; i < n;)
	{
		if (black == true)
		{
			do
			{
				i++;
				if (i <= n)
				{
					scanf("%d %d", &x, &y);
					//printf("i : %d black in : (%d,%d)\n", i, x, y);
				}
				else
				{
					break;
				}
			} while (x > 2 || x < 0 || y > 2 || y < 0 || board[x][y] != 0);

			if (i > n)
				break;

			board[x][y] = 1;
			//printf("i : %d black in : (%d,%d)\n", i, x, y);
			black = false;
			white = true;
		}
		else if (white == true)
		{
			do
			{
				i++;
				if (i <= n)
				{
					scanf("%d %d", &x, &y);
					//printf("i : %d white in : (%d,%d)\n", i, x, y);
				}
				else
				{
					break;
				}
			} while (x > 2 || x < 0 || y > 2 || y < 0 || board[x][y] != 0);

			if (i > n)
				break;

			board[x][y] = 2;
			//printf("i : %d white in : (%d,%d)\n", i, x, y);
			white = false;
			black = true;
		}
	}

	row_1 = board[0][0] * board[0][1] * board[0][2];
	row_2 = board[1][0] * board[1][1] * board[1][2];
	row_3 = board[2][0] * board[2][1] * board[2][2];
	col_1 = board[0][0] * board[1][0] * board[2][0];
	col_2 = board[0][1] * board[1][1] * board[2][1];
	col_3 = board[0][2] * board[1][2] * board[2][2];
	slash_1 = board[0][0] * board[1][1] * board[2][2];
	slash_2 = board[0][2] * board[1][1] * board[2][0];
	sum = row_1 * row_2 * row_3;

	if (row_1 == 1 || row_2 == 1 || row_3 == 1 || col_1 == 1 || col_2 == 1 || col_3 == 1 ||
		slash_1 == 1 || slash_2 == 1)
	{
		printf("Black wins.");
	}
	else if (row_1 == 8 || row_2 == 8 || row_3 == 8 || col_1 == 8 || col_2 == 8 ||
			 col_3 == 8 || slash_1 == 8 || slash_2 == 8)
	{
		printf("White wins.");
	}
	else if (sum != 0)
	{
		printf("There is a draw.");
	}
	else
	{
		printf("There is a draw.");
	}

	return 0;
}
