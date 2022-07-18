#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    uint32_t x;
    uint32_t x1, x2, x3, y1, y2, y3;
    int triangle[32];
    float a, b, c;

    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        bool defined = false;

        scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
        a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
        c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));

        a = a * a;
        b = b * b;
        c = c * c;

        if ((x1 == x2 && x2 == x3 && x3 == x1) || (y1 == y2 && y2 == y3 && y3 == y1)) // 三點為一直線無法構成三角形
        {
            triangle[i] = 5;
            defined = true;
        }

        else if (a == b || b == c || c == a) // 判斷等邊三角形 a = b = c
        {
            triangle[i] = 1;
            defined = true;
        }

        if (defined == false) // 判斷直角三角形 a^2 + b^2 = c^2
        {

            if (c > b && c > a)
            {
                int cc = round(c);

                if (a + b == cc)
                {
                    triangle[i] = 2;
                    defined = true;
                }
            }
            else if (b > c && b > a)
            {
                int bb = round(b);

                if (a + c == bb)
                {
                    triangle[i] = 2;
                    defined = true;
                }
            }
            else if (a > b && a > c)
            {
                int aa = round(a);

                if (b + c == aa)
                {
                    triangle[i] = 2;
                    defined = true;
                }
            }
        }

        if (defined == false) // 判斷鈍角三角形 a^2 + b^2 < c^2
        {

            if (c > b && c > a)
            {
                if ((a + b) < c)
                {
                    triangle[i] = 3;
                    defined = true;
                }
            }
            else if (b > c && b > a)
            {
                if (a + c < b)
                {
                    triangle[i] = 3;
                    defined = true;
                }
            }
            else if (a > b && a > c)
            {
                if (b + c < a)
                {
                    triangle[i] = 3;
                    defined = true;
                }
            }
        }

        if (defined == false) // 判斷銳角三角形 a^2 + b^2 > c^2
        {

            if (c > b && c > a)
            {
                if (a + b > c)
                {
                    triangle[i] = 4;
                    defined = true;
                }
            }
            else if (b > c && b > a)
            {
                if (a + c > b)
                {
                    triangle[i] = 4;
                    defined = true;
                }
            }
            else if (a > b && a > c)
            {
                if (b + c > a)
                {
                    triangle[i] = 4;
                    defined = true;
                }
            }
        }
    }

    for (int j = 0; j < x; j++)
    {
        if (1)
        {
            if (triangle[j] == 1)
            {
                printf("isosceles\n");
            }
            else if (triangle[j] == 2)
            {
                printf("right\n");
            }
            else if (triangle[j] == 3)
            {
                printf("obtuse\n");
            }
            else if (triangle[j] == 4)
            {
                printf("acute\n");
            }
            else if (triangle[j] == 5)
            {
                printf("Not a triangle\n");
            }
            else
            {
                printf("%d\n", triangle[j]);
            }
        }
    }

    return 0;
}