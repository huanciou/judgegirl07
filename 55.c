#include <stdio.h>
#include <stdbool.h>

int main()
{
	//我知道我們屬於不同的世界. 我們追尋不同的方向. 我們依循不同的週期.
	//但是,如果我願意用一輩子的時間等待. 那麼, 在我燈枯油盡之前. 我們是否能有 相逢的一天?

	int M, N = {0}; // The End distance of the world (horizontal, Vertical)

	int X1, Y1, X2, Y2 = {0}; // Starting point of R1, R2

	int F1, F2 = {0}; // Fuel

	int N1 = 0; // time R1 steps to North
	int E1 = 0; // time R1 steps to East
	int N2 = 0; // time R2 steps to North
	int E2 = 0; // time R2 steps to East

	int robot1_path_x[50000] = {0};
	int robot1_path_y[50000] = {0};
	int robot2_path_x[50000] = {0};
	int robot2_path_y[50000] = {0};

	int i = 1;
	int j = 1;
	int o = 1;
	int p = 1;

	int T = 0;

	//printf("M,N,X1,Y1,E1,N1,F1,X2,Y2,E2,N2,F2\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d",
		  &M, &N, &X1, &Y1, &E1, &N1, &F1, &X2, &Y2, &E2, &N2, &F2);

	robot1_path_x[0] = X1;
	robot1_path_y[0] = Y1;
	robot2_path_x[0] = X2;
	robot2_path_y[0] = Y2;

	int NN1 = N1;
	int EE1 = E1;
	int NN2 = N2;
	int EE2 = E2;

	// Robot 1

	while (F1 > 0)
	{
		N1 = NN1;
		E1 = EE1;
		i = j;

		for (; (N1 > 0) && (F1 > 0); i++) // 如果往北的步數沒走完
		{
			if ((Y1 + 1) < N) // 下一步不是邊界
			{
				F1--;
				N1--;
				Y1++;
				robot1_path_x[i] = X1;
				robot1_path_y[i] = Y1;

				//printf("第%d步,（%d,%d）\n", i, robot1_path_x[i], robot1_path_y[i]);
			}
			else
			{
				F1--;
				N1--;
				Y1 = 0;
				robot1_path_x[i] = X1;
				robot1_path_y[i] = Y1;
				//printf("第%d步,（%d,%d)\n", i, robot1_path_x[i], robot1_path_y[i]);
			}
		}

		for (j = i; (E1 > 0) && (F1 > 0); j++) // 如果往東的步數沒走玩
		{
			if ((X1 + 1) < M) // 下一步不是邊界
			{
				F1--;
				E1--;
				X1++;
				robot1_path_x[j] = X1;
				robot1_path_y[j] = Y1;
				//printf("第%d步,（%d,%d)\n", j, robot1_path_x[j], robot1_path_y[j]);
			}
			else
			{
				F1--;
				E1--;
				X1 = 0;
				robot1_path_x[j] = X1;
				robot1_path_y[j] = Y1;
				//printf("第%d步,（%d,%d）\n", j, robot1_path_x[j], robot1_path_y[j]);
			}
		}
	}

	// Robot 2
	while (F2 > 0)
	{
		N2 = NN2;
		E2 = EE2;
		p = o;

		for (; (E2 > 0) && (F2 > 0); p++) // 如果往東的步數沒走玩
		{
			if ((X2 + 1) < M) // 下一步不是邊界
			{
				F2--;
				E2--;
				X2++;
				robot2_path_x[p] = X2;
				robot2_path_y[p] = Y2;
				//printf("第%d步,（%d,%d)\n", p, robot2_path_x[p], robot2_path_y[p]);
			}
			else
			{
				F2--;
				E2--;
				X2 = 0;
				robot2_path_x[p] = X2;
				robot2_path_y[p] = Y2;
				//printf("第%d步,（%d,%d）\n", p, robot2_path_x[p], robot2_path_y[p]);
			}
		}

		for (o = p; (N2 > 0) && (F2 > 0); o++) // 如果往北的步數沒走完
		{
			if ((Y2 + 1) < N) // 下一步不是邊界
			{
				F2--;
				N2--;
				Y2++;
				robot2_path_x[o] = X2;
				robot2_path_y[o] = Y2;

				//printf("第%d步,（%d,%d）\n", o, robot2_path_x[o], robot2_path_y[o]);
			}
			else
			{
				F2--;
				N2--;
				Y2 = 0;
				robot2_path_x[o] = X2;
				robot2_path_y[o] = Y2;
				//printf("第%d步,（%d,%d)\n", o, robot2_path_x[o], robot2_path_y[o]);
			}
		}
	}

	j = j - 1;
	o = o - 1;

	int step;
	bool robot1_stop_first = false;
	bool robot2_stop_first = false;
	bool here = false;

	if (j > o)
	{
		step = j;
		robot2_stop_first = true;
	}
	else if (o > j)
	{
		step = o;
		robot1_stop_first = true;
	}
	else if (o == j)
	{
		step = o;
	}

	for (T = 1; T <= step; T++) // step是機器人的最大步數
	{
		if (robot1_stop_first == true)
		{
			if ((T == (j + 1)) || here == true)
			{
				here = true;

				if ((robot1_path_x[j] == robot2_path_x[T]) && (robot1_path_y[j] == robot2_path_y[T]))
				{
					printf("robots explode at time %d", T);
					return 0;
				}
			}
			else if ((robot1_path_x[T] == robot2_path_x[T]) && (robot1_path_y[T] == robot2_path_y[T]))
			{
				printf("robots explode at time %d", T);
				return 0;
			}
		}

		else if (robot2_stop_first == true)
		{
			if ((T == (o + 1)) || here == true) // 大方超車小方一號時進來
			{
				here = true;

				if ((robot1_path_x[T] == robot2_path_x[o]) && (robot1_path_y[T] == robot2_path_y[o]))
				{
					printf("robots explode at time %d", T);
					return 0;
				}
			}
			else if ((robot1_path_x[T] == robot2_path_x[T]) && (robot1_path_y[T] == robot2_path_y[T]))
			{
				printf("robots explode at time %d", T);
				return 0;
			}
		}

		else
		{
			if ((robot1_path_x[T] == robot2_path_x[T]) && (robot1_path_y[T] == robot2_path_y[T]))
			{
				printf("robots explode at time %d", T);
				return 0;
			}
		}
	}

	printf("robots will not explode");

	return 0;
}
