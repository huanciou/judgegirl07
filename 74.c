#include <stdio.h>
 
int main()
{
    int n = 0;
    int m;
 
    scanf("%d", &n);
 
    int box[n];
    int mod[100000] = {0};
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &box[i]);
    }
 
    scanf("%d", &m);
 
    for (int j = 0; j < n; j++) // if m == 3 ; 跑 % 3 = {0, 1 , 2}
    {
        box[j] = box[j] % m; // 把每個 n 的 餘數 裝進 mod[]
        mod[box[j]]++;
    }
 
    for (int u = 0; u < m; u++)
    {
        printf("%d\n", mod[u]);
    }
 
    return 0;
}
