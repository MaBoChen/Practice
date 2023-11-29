//判断一个整数是否能5整除
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a % 5 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

//想知道从键盘输入的两个数的大小关系
#include <stdio.h>

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (a == b)
        {
            printf("%d=%d\n", a, b);
        }
        else if (a > b)
        {
            printf("%d>%d\n", a, b);
        }
        else if (a < b)
        {
            printf("%d<%d\n", a, b);
        }
    }
    return 0;
}

//输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    int z = 0;
    scanf("%d", &z);
    if (z >= 140)
    {
        printf("Genius");
    }
    return 0;
}

//给定两个整数a和b (0 < a,b < 10,000)，计算a除以b的整数商和余数。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d %d", &a, &b);
    c = a / b;
    d = a % b;
    printf("%d %d", c, d);
    return 0;
}