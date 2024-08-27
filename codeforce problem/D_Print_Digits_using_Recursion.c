#include <stdio.h>

void fun(int i)
{
    if (i == 0)
        return;
    int x = i % 10;
    fun(i / 10);
    printf("%d ", x);
}

int main()
{
    int i, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &i);
        fun(i);
        if(i==0)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}