#include <stdio.h>

int main()
{
    int a_thousand;   // 1000
    int five_hundred; // 500
    int a_hundred;    // 100
    int fifty;        // 50
    int ten;          // 10
    int five;         // 5
    int one;          // 1

    int number;

    while (scanf("%d", &number) == 1) // 牛逼寫法 記起來 scanf傳回值=你變數的值
    {
        do
        {
            a_thousand = number / 1000;
            number -= a_thousand * 1000;

            five_hundred = number / 500;
            number -= five_hundred * 500;

            a_hundred = number / 100;
            number -= a_hundred * 100;

            fifty = number / 50;
            number -= fifty * 50;

            ten = number / 10;
            number -= ten * 10;

            five = number / 5;
            number -= five * 5;

            one = number / 1;
        } while (0);

        printf("%d %d %d %d %d %d %d\n", a_thousand, five_hundred, a_hundred, fifty, ten, five, one);
    }

    return 0;
}
