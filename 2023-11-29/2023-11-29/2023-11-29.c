//�ж�һ�������Ƿ���5����
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

//��֪���Ӽ���������������Ĵ�С��ϵ
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

//����һ��������ʾһ���˵����̣�������ڵ���140�����������һ����ţ������Genius����
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

//������������a��b (0 < a,b < 10,000)������a����b�������̺�������
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